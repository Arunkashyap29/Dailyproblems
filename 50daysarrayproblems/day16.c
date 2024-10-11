// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
 int arr[] ={1,2,4,3,6,8,7,9};
 int n = sizeof(arr)/sizeof(arr[0])+1;
 int q=0,sum=0;
 int totalsum = n*(n+1)/2;
 
 
 for(int i=0; i<8; i++)
 {
     sum = sum+ arr[i];
     
 }
 
 if(totalsum ==sum )
 {
     printf("no missing element ");
     
 }
 else{
     
    totalsum = totalsum-sum;
 }
 
 printf("missing element %d", totalsum);

    return 0;
}