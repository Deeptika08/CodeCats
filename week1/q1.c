#include<stdio.h>
int main()
{
int num;
printf("\nEnter A number to check if its ODD or EVEN: ");
scanf("%d",&num);
	if(num==0)
	{
	printf("\n\t %d is an EVEN number",num);
	}
	else if(num%2==0)
	{
	printf("\n\t %d is an EVEN number",num);
	}
	else
	{
	printf("\n\t %d is an ODD number",num);
	}

return 0;
}

