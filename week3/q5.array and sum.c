#include<stdio.h>
int main()
{
int i;
float sum;
int arr[5];
 	for(i=0;i<5;i++)
	{
	printf("\n Enter the %d element :", i+1);
	scanf("%d",&arr[i]);
	printf("\n\t%d element is: %d\n",i+1,arr[i] );
	}
	
	for(i=0;i<5;i++)  /*sum of array*/
	{
 	sum+=arr[i];
	}
	
	printf("\n\t 1. sum of ENTIRE array is : %.1f", sum);
	printf("\n\t 2. Sum at even positions of array is %d", arr[1]+arr[3]);
	printf("\n\t 3. Sum at odd positions of array is %d", arr[0]+arr[2]+arr[4]);;

return 0;
}


