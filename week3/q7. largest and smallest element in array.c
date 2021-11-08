#include<stdio.h>
int main()
{
int size,LargeNum, SmallNum,i;
printf("\n Size of array: ");
scanf("%d",&size);
int arr[size];
printf("\n Enter elements of array: ");
 	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	}
	
	LargeNum=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>LargeNum)
		{
		LargeNum=arr[i];
		}
	}
	printf("\n Largest number in array is: %d", LargeNum);
	
	SmallNum=arr[0];
	for(i=0;i<size;i++)
	{
		if(SmallNum>arr[i])
		{
		SmallNum=arr[i];
		}
	}	
	printf("\n Smallest number in array is: %d", SmallNum);

return 0;
}

