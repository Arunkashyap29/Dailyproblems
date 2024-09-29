#include <stdio.h>

int main() {
    int arr[3][4] ={{10,20,30,50},{20,21,22,23},{30,40,50,90}};
    
    // int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d \t" , arr[i][j]);
            
        }
        printf("\n");
    }
    
    
    // printf("%p \n",&arr);
    //     printf("%p\n ",&arr+1);

    // printf("%p\n ",&arr+2);
    
    // printf("%p\n", *arr);
    // printf("%d\n", *(*arr));
    
    // printf("%d\n", *((*arr)+3));
    // printf("%d\n", *(*(arr+2)+3)); 
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%p ",(*(arr+i)+j));
        }
        
        printf("\n");
    }
    
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d \t",*(*(arr+i)+j));
        }
        
        printf("\n");
    }
    
    

    return 0;
}