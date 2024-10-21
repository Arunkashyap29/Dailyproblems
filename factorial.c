#include<stdio.h>

int fact(int n)
{
    if(n==0)
    {
        return 1;
        
    }
    else {
        
        n=n*fact(n-1);
        

    }
}


int main()
{
    int number;

    printf("Enter Positive Number : ");
    scanf("%d",&number);


printf("%d", fact(number));

// return 1;
}



