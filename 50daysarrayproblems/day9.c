#include<stdio.h>
int main()
{
int arr[4][5] ={{1,0,1,0,1},{1,1,1,0,1},{1,0,0,0,1},{1,1,1,1,1}};
int count =0, maxcount=0, rowindex =0;

for(int i=0; i<4; i++)
{
count=0;

for(int j=0; j<5; j++)
 {
   if(arr[i][j]==1)
   {
	count++;
   }
 }
if(count>maxcount)
 {
    maxcount = count;
    rowindex = i;

 }

}


printf("maximum 1's is %d in  %d row ", maxcount, rowindex);

}