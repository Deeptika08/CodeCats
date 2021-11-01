#include<stdio.h>
int main()
{
int num,i,sum=0;
printf("\n enter the natural number uptil where you'd the sum of:");
scanf("%d",&num);

	for(i=1;i<=num;i++) /*not i=0 cuz zero doesn't count in sum*/
	{
	printf("\n%d",i);
	sum=sum+i;
	}
	printf("\n sum of %d natural number is= %d",num,sum);

return 0;
}

