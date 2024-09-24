#include<stdio.h>
void selection(int a[50],int c){
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
printf("\t%d",a[i]);
}
}
int main()
{
int b[50];
int i,e;
printf("Enter the range of the array :-");
scanf("%d",&e);
for(i=0;i<e;i++){
scanf("%d",&b[i]);
}
selection(b,e);
   return 0;
}
