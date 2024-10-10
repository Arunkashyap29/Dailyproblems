#include<stdio.h>
 int main()
 {

	int i,j,temp,size, nthlargest,k,smallest,p;
	int arr[]={1, 2, -5, -8, 3, -4, 0, -2, 5, -1, -6, 6, 8, 4, };
	 size=sizeof(arr)/sizeof(arr[0]);
	printf("Given array is: ");
	for(i=0;i<size;i++)

{
	printf("%d \t",arr[i]);

}


	for(i=0;i<size;i++)
{
	for(j=0;j<size-i-1;j++)
{

	if(arr[j]>arr[j+1])
{

	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;

}

}

}
printf("\nSorted array is: ");
for(i=0;i<size;i++){
	printf("%d\t",arr[i]);
}
}