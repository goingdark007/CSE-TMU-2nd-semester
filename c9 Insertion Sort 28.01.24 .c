#include<stdio.h>
void insertion(int a[50],int c){
int i,j,key;
for(i=1;i<c;i++){
        key = a[i];
        j = i-1;
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
int main(){
int b[50];
int i,e;
printf("Enter the range of the array:- ");
scanf("%d",&e);
for(i=0;i<e;i++){
    scanf("%d",&b[i]);
}
insertion(b,e);
}
