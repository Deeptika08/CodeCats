#include<stdio.h>
int main()
{
int n1,n2,n3,ch;

do
{
printf("\n Enter first number : ");
scanf("%d", &n1);
printf("\n Enter second number : ");
scanf("%d", &n2);
printf("\n Enter first number : ");
scanf("%d", &n3);


	if(n1 && n2 < n3)
	{ 
	printf("greater number is: %d",n3);
	}
	else if(n1 && n3 < n2)
	{ 
	printf("greater number is: %d",n2);
	}
	else
	{
	printf("%d and %d are EQUAL",n1,n2);
	}
printf("\n Enter any value to continue the loop, and 0 to exit!!!");
scanf("%d",&ch);
}
while(ch!=0);

return 0;
}

