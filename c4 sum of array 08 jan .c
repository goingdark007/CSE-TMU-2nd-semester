#include<stdio.h>
int main(){
int a[20];
int i,c,sum = 0;
printf("Enter the range of the array :-  ");
scanf("%d",&c);
for(i=0;i<c;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<c;i++){
    sum += a[i];
}
printf("\n%d",sum);
return 0;
}
