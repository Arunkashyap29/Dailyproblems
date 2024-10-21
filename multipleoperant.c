#include<stdio.h>

int calculate(char p,int x, int y)
{
    int z;
    
    if(p =='+')
    {
    z= x+y;
    printf("addition of a and b is : %d\n",z);
    }
    
    else if(p=='-')
    {
    z= x-y;
    printf("Subtraction of a and b is : %d\n",z);
    }
    
    else if(p=='*')
    {
    z= x*y;
    printf("Multiplication of a and b is : %d\n",z);
    }
    
    else if(p=='/')
    { 
    z=x/y;
    printf("Division of a and b is : %d\n",z);
   }

return 0;
}



int main()
{
    int a,b;
    char o;
    
   printf("Enter the operator  :");
     scanf("%c",&o);
    printf("Entery the value of a and b for calculate  :");
    scanf("%d  %d",&a,&b);
     
    
    
  calculate(o,a,b);

    
    
} 
