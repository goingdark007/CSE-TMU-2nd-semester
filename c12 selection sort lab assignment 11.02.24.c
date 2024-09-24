#include<stdio.h>
void ascend(int a[50],int c){
int i,j,min,temp;
for(i=0;i<c-1;i++){
min = i;
for(j=i+1;j<c;j++){
    if(a[j]<a[min]){
    min = j;
    }
    }
    if(min!=i){
    temp = a[min];
    a[min] = a[i];
    a[i] = temp;
    }
}
for(i=0;i<c;i++){
 printf("%d\t",a[i]);
}
}
void descend(int x[50],int y){
int i,j,max,temp;
for(i=0;i<y-1;i++){
max = i;
for(j=i+1;j<y;j++){
    if(x[j]>x[max]){
    max = j;
    }
    }
    if(max!=i){
    temp = x[max];
    x[max] = x[i];
    x[i] = temp;
    }
}
for(i=0;i<y;i++){
 printf("%d\t",x[i]);
}
}
int main()
{
int b[50];
int i,j,min,e,temp;
printf("Enter the range of the array :-");
scanf("%d",&e);
for(i=0;i<e;i++){
scanf("%d",&b[i]);
}
ascend(b,e);
printf("\n");
descend(b,e);
   return 0;
}