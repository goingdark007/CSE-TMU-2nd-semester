#include<stdio.h>
#include<string.h>
int bubble(int a[50],int c){
int i,j,temp;
for(i=0;i<c-1;i++){
    for(j=0;j<c-i-1;j++){
        if(a[j]>a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }
    }
}
return a[50];
}
int descend(int x[50],int y){
int i,j,temp;
for(i=0;i<y-1;i++){
    for(j=0;j<y-i-1;j++){
        if(x[j]<x[j+1]){
            temp = x[j];
            x[j] = x[j+1];
            x[j+1] = temp;
            }
    }
}
return x[50];
}
int main(){
int b[50];
char op[]="yes";
char df[10];
int i,e;
printf("Enter the range of the array:- ");
scanf("%d",&e);
for(i=0;i<e;i++){
    scanf("%d",&b[i]);
}
printf("Do you want it in the ascending order? :- ");
scanf("%s",&df);
if(strcmp(df,op)==0){
bubble(b,e);
for(i=0;i<e;i++){
        printf("\t%d",b[i]);
    }
}
else{
    descend(b,e);
    for(i=0;i<e;i++){
        printf("\t%d",b[i]);
    }

}
return 0;
}
