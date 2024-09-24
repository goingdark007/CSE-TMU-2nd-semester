#include<stdio.h>
int main (){
int a,i,b=1;
printf("Enter the number :- ");
scanf("%d",&a);
for(i=a;i!=0;i--){
    b = b *i;
}
printf("\n%d",b);
return 0;
}
