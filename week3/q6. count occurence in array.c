#include<stdio.h>
int main()
{
int size,i,num,count=0;
printf("\nEnter the size of array: ");
scanf("%d",&size);
int arr[size];

	for(i=0;i<size;i++)
	{
	    scanf("%d",&arr[i]);
	}

printf("\n Enter to check the occurence of any number : ");
scanf("%d",&num);

    for(i=0;i<size;i++)
    {
        if(num==arr[i])
        {
            count++;
        }
        
    }
printf("\n\t The number of times %d occurs in entered array is %d",num,count);
return 0;
}

