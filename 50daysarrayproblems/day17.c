// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
 int arr[] ={1,5,7,-1,5};
 int n = sizeof(arr)/sizeof(arr[0])+1;

 int count=0;
 
 
 for(int i=0; i<n; i++)
 {
     for(int j=i+1; j<n; j++)
     {
         
         if(arr[i]+arr[j]==6)
         {
             count++;
             printf("pair = {%d,%d}\n ", arr[i], arr[j]);
         }
     }
     
 }
 
 
 
 printf("number of pair : %d", count);

    return 0;
}