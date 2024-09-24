#include<stdio.h>
int main(){
int a[50];
int n,mid,low,high,key,i,e;
printf("Enter the num of array : ");
scanf("%d",&n);
printf("Enter the array :");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Enter the key :");
scanf("%d",&key);
low = 0;
high = n-1;
e = 0;
while(mid>=0){
     mid = (low + high)/2;
     if(a[mid]==key){
        e++;
        break;
     }
    if(a[mid]>key){
        high = mid - 1;
    }
    if(a[mid]<key){
        low = mid + 1;
    }
}
if(e=1){
    printf("The key is found at %d index",mid);
}
else{
    printf("The key is not found");
}
}
