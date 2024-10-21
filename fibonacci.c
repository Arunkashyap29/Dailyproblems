// #include<stdio.h>

// int Fibonacci(int n)
// {
//    int temp =0;
//     if(n==0)
//     {
//         return 0;
//     }
//     else if(n==1)
//     {
//         return 1;

//     }else 

//        return Fibonacci(n-1)+Fibonacci(n-2);

    
//     }



// int main()
// {
//     int num;

//     printf("Fibonacci Series ");
// scanf("%d",&num);

// printf("%d",Fibonacci(num));



// }




#include<stdio.h>

int main()
{
    int n=8;

   if(n==0)
   {
    return 0;
   }
   else if(n==1)
   {
    return 1;
   }
   else{
    n=(n-1)+(n-2);


   }

    printf("%d",n);


}