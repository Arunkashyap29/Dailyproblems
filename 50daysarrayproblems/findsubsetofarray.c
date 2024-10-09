// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr1[]={11,1,13,21,3,7};
    int arr2[]={11, 3, 9, 1};
    
    int count=0;
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
     int size2 = sizeof(arr2)/sizeof(arr2[0]);
     for(int i=0; i<size1; i++)
     {
         for(int j=0; j<size2; j++)
         {
             if(arr1[i]==arr2[j])
             {
                 count++;
             }
         }
     }
     if(count==size2)
     {
         printf("array 2 is a subset of array 1");
     }
     else
     {
         printf("array 2 is NOT a subset of array 1");
     }
    

    return 0;
}