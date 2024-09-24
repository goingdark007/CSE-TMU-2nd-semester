#include<stdio.h>
int main(){
float a,b,c;
printf("Enter the first number :-  ");
scanf("%f",&a);
printf("Enter the second number :-  ");
scanf("%f",&b);
printf("Enter the third number :-  ");
scanf("%f",&c);
if((a>b)&&(a>c)){
    printf("%.3f is the biggest number",a);
}
if((b>a)&&(b>c)){
    printf("%.3f is the biggest number",b);
}
if((c>b)&&(c>a)){
    printf("%.3f is the biggest number",c);
}
return 0;
}
