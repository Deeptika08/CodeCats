#include<stdio.h>
int main()
{
int weeknum;

printf("\n\tEnter a week number(1-7) to print week day!: ");
scanf("%d",&weeknum);

switch(weeknum)
{
	case 1:
	{
	printf("\n%d number of week corresponds to: MONDAY",weeknum);
	break;
	}
	case 2:
	{
	printf("\n%d number of week corresponds to: TUESDAY",weeknum);
	break;
	}
	case 3:
	{
	printf("\n%d number of week corresponds to: WEDNESDAY",weeknum);
	break;
	}
	case 4:
	{
	printf("\n%d number of week corresponds to: THURSDAY",weeknum);
	break;
	}
	case 5:
	{
	printf("\n%d number of week corresponds to: FRIDAY",weeknum);
	break;
	}
	case 6:
	{
	printf("\n%d number of week corresponds to: SATURDAY",weeknum);
	break;
	}
	case 7:
	{
	printf("\n%d number of week corresponds to: SUNDAY",weeknum);
	break;
	}
	default:
	{
	printf("\nINVALID CHOICE!");
	break;
	}
}

return 0;
}

