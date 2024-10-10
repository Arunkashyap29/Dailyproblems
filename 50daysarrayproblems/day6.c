// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int count=0;
    int x=2;
    
     int arr[] ={0,1,2,0,2,1,0,2,1};
     int size = sizeof(arr)/sizeof(arr[0]);
     for(int i=0; i< size; i++)
     {
         if(x==arr[i])
         {
         count++;             
         }

     }
     
   
         printf("%d ", count);
    return 0;
}