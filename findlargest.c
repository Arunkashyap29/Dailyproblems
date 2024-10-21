#include<stdio.h>

int calculate(int x,int y, int z)
{
    // int z;
    
    if(x<y && z<y)
    {

    printf("y is : %d\n",y);
    }
    
    else if(y<x && z<x)
    {
    printf("x is : %d\n",x);
    }
    
    else if(y<z && x<z)
    {
    printf("z is : %d\n",z);
    }
    

return 0;
}



int main()
{
    int a,b,c;
   
    
 
    printf("Entery the value of a, b and c   :");
    scanf("%d  %d %d",&a,&b,&c);
     
    
    
  calculate(a,b,c);

    
    
} 
