#include <stdio.h>

int main() {
     int arr[] = {1,-2,-5,-4,-5,-6,-8,-7,1,7, 9,5,2,4,3,4,5};
         // Second array
    int size = sizeof(arr) / sizeof(arr[0]);  // Size of arr1
    
    int arr1[size];       // First array
    int arr2[size]; 
    int arr3[size];  
    int temp1=0;
    int temp2=0;// Array to store merged arrays
int mergtemp =0;


    // Copy elements from arr1 to arr3
    for (int i = 0; i < size; i++) {
        if(arr[i]<0)
     {   
        arr1[temp1++] = arr[i];
        // temp1++;
    }
    else
    {
        arr2[temp2++]=arr[i];
    }
    
    }
    
    for (int i = 0; i < temp1; i++) {
        arr3[mergtemp++] = arr1[i];

    }
    

    for (int i = 0; i < temp2; i++) {
        arr3[mergtemp++] = arr2[i];
    }

    // Print merged array
    printf("arranged array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
