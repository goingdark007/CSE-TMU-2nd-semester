#include<stdio.h>
int main(){
int a,b,temp;
printf("Enter the value of a :-  ");
scanf("%d",&a);
printf("Enter the value of b :-  ");
scanf("%d",&b);
temp = a;
a = b;
b = temp;
printf("The value of a is %d",a);
printf("\nThe value of b is %d",b);
return 0;
}
