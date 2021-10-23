#include<stdio.h>
int main()
{
int p,c,b,m,cs;
float percent, sum;
printf("\n\t Marks in Physics: ");
scanf("%d", &p);
printf("\n\t Marks in Chemistry: ");
scanf("%d", &c);
printf("\n\t Marks in Biology: ");
scanf("%d", &b);
printf("\n\t Marks in Mathematics: ");
scanf("%d", &m);
printf("\n\t Marks in Computer: ");
scanf("%d", &cs);	 

sum=p+c+m+cs+b;
percent= (sum/500)*100;
printf("\n The percentage obtained is: %f \n\n", percent); 

	if(percent>=90)
	{
	printf("GRADE OBTAINED: A");
	}
	else if(percent>=80 && percent<90)
	{
	printf("GRADE OBTAINED: B");
	}
	else if(percent>=70 && percent<80)
	{
	printf("GRADE OBTAINED: C");
	}
	else if(percent>=60 && percent<70)
	{
	printf("GRADE OBTAINED: D");
	}
	else if(percent>=50 && percent<60)
	{
	printf("GRADE OBTAINED: E");
	}
	else
	{
	printf("GRADE OBTAINED: F");
	}

return 0;
}

