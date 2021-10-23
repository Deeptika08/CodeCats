#include<stdio.h>
int main()
{
int year;
printf("\n Enter the year to check if it leap or non-leap:");
scanf("%d",&year);

if(year%4==0)
{
printf("\n %d IS a leap year", year);
}
else
{
printf("\n %d is NOT a leap year", year);
}

return 0;
}

