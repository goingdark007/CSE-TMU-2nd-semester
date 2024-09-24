#include<stdio.h>
int main(){
int a[50];
int i,j,c,temp;
printf("Enter the range of the array");
scanf("%d",&c);
for(i=0;i<c;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<c-1;i++){
    for(j=0;j<c-i-1;j++){
        if(a[j]>a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}
for(i=0;i<c;i++){
    printf("\t%d",a[i]);
}
return 0;
}
