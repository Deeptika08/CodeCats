#include<stdio.h>
int main()
{
/*a prime number n has 2 factors:- 1 and n*/
int n,i,factor=0;
printf("\n Enter a number to check if it's prime or not : ");
scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(n%i==0)  /* if n is completely divisible by i, factor ++ */
		factor++;
	}
	
	if(factor==2)
	{
	printf("\n Given number %d is prime ",n);
	}
	else{
	printf("\n Given number %d is NOT prime ",n);
	}

return 0;
}

