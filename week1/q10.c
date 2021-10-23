#include<stdio.h>
int main()
{
int sal;
float hra,da, tot_sal;
printf("\n Enter the salary of Employee: ");
scanf("%d",&sal);

	if(sal<=10000)
	{
	hra=sal*0.2;
	da=sal*0.8;
	tot_sal= sal+hra+da;
	printf("\nTotal salary is: %f", tot_sal);
	}
	else if(sal<=20000 && sal>10000)
	{
	hra=sal*0.25;
	da=sal*0.9;
	tot_sal= sal+hra+da;
	printf("\nTotal salary is: %f", tot_sal);
	}
	else
	{
	hra=sal*0.3;
	da=sal*0.95;
	tot_sal= sal+hra+da;
	printf("\nTotal salary is: %f", tot_sal);
	}

return 0;
}


