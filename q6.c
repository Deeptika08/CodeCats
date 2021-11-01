#include<stdio.h>
#include<math.h>
int main()
{
int num,pow,i;
float res=1;
printf("\n Enter the BASE number: ");
scanf("%d",&num);
printf("\n Enter the POWER : ");
scanf("%d",&pow);

	for(i=1;i<=pow;i++)
	{
	res=res*num;   /*number is multiplied power times*/
	}
printf("\n Result is: %.2f",res);

return 0;
}




