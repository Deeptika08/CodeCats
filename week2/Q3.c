#include<stdio.h>
int main()
{
int n,cube,rem,sum=0,NUM;
printf("\n Enter a THREE number to check if it's Armstrong or not: ");
scanf("%d",&n);

	NUM=n; /*TO preserve the original number*/
	
	while(n>0)
	{
	rem=n%10;   /*gets us the last digit of number*/

	sum=sum+(rem*rem*rem);
	n=n/10;  /*when num<0; while condition becomes false and loop terminates*/
	}
	
	if(NUM==sum)
	{
	printf("\n Number is ARMSTRONG! ");
	}
	else
	{
	printf("\n Number is NOT ARMSTRONG");
	}
return 0;
}

