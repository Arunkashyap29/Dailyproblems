
#include <stdio.h>


int CalculateArraysum(int a[], int size)
{
 
    int sum=0;


    
    
    for(int i=0; i<size; i++)
    {
        sum = sum + a[i];
        
    }

printf("%d",sum );

    return sum;
}



int main() {
    
    int arr[] = {1,2,3,4};
    
int size = sizeof(arr) / sizeof(arr[0]);
    CalculateArraysum( arr , size);



    
    
    return 0;
}