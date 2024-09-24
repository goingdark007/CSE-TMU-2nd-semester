#include<stdio.h>
void bubble(int a[50],int c){
int i,j,temp;
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
}
int main(){
int b[50];
int i,v;
printf("Enter the range of the array");
scanf("%d",&v);
bubble(b,v);
}
