#include<stdio.h>
#include<math.h>

int fact(int n){
	if(n==1)
	{
	return (1);
	}
	else
	{
	return (n*fact(n-1));
	}
}

int main()
{
int n;
printf("\n enter a natural number to get its factorial: ");
scanf("%d",&n);
printf("\n Factorial of %d is %d",n,n*fact(n-1));

return 0;
}

