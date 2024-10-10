// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[] ={1,3,5,2,6,7,4};
     int count=0;
     int size = sizeof(arr)/sizeof(arr[0]);
     int majoritynum = -1;
     
     for(int i=0; i<size; i++)
     {
         count=0;
         
         for(int j=0; j<size; j++)
         {
             if(arr[i]==arr[j])
             {
                 count++;
             }
         }
         if(count>size/2)
         {
             majoritynum = arr[i];
             break;
             
         }
         
  
        
     }
     
          if (majoritynum == -1)
       {
           printf("not found");
       } else {
            printf("%d",majoritynum);
       }
       
     
     
    

    return 0;
}