#include<stdio.h>
#include<string.h>
void ascend(int a[50],int c){
int i,j,key;
for(i=1;i<c;i++){
    key = a[i];
    j = i - 1;
    while(j>=0&&a[j]>key){
        a[j+1] = a[j];
        j = j - 1;
    }
    a[j+1] = key;
}
for(i=0;i<c;i++){
    printf("\t%d",a[i]);
}
}
void descend(int x[50],int y){
int i,j,key;
for(i=1;i<y;i++){
    key = x[i];
    j = i - 1;
    while(j>=0&&x[j]<key){
        x[j+1] = x[j];
        j = j - 1;
    }
    x[j+1] = key;
}
for(i=0;i<y;i++){
    printf("\t%d",x[i]);
}
}
int main(){
int b[50];
int e,i;
char sp[] = "yes";
char df[4];
printf("Enter the range of the array:-");
scanf("%d",&e);
for(i=0;i<e;i++){
    scanf("%d",&b[i]);
}
printf("Do you want it in the ascending order?:- ");
scanf("%s",&df);
if(strcmp(sp,df)==0){
ascend(b,e);
}
else{
    descend(b,e);
}
return 0;
}
