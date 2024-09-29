#include<stdio.h>
int main(){
int i,j,temp,size, nthlargest,k,smallest,p;
int arr[6]={4,1,3,6,8,5};
//  size=sizeof(arr)/sizeof(arr[0]);
printf("Unsorted array is: ");
for(i=0;i<6;i++){
	printf("%d \t",arr[i]);
}
for(i=0;i<6;i++){
for(j=0;j<6-i-1;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("\nSorted array is: ");
for(i=0;i<6;i++){
	printf("%d\t",arr[i]);
}
}