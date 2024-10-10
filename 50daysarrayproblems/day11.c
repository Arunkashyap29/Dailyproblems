#include<stdio.h>
 int main()
 {
	int arr[6]={1,2,3,4,5,6};
	


for(int i=0; i<6; i+=2 ) {
 if(i<6) {
    int temp = 0;
        if(arr[i]<arr[i+1])  {
        printf("swapping");
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
     //   i= i + 2;
    }
    }
  } 


printf("\nSorted array is: ");
for(int i=0;i<6;i++){
    printf("\nSorted array is: ");

	printf("%d\t",arr[i]);
}

return 0;
}