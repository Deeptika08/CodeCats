/* a formula can be applied for number of stars in a row
   No. of stars in a row=(2*row no.)-1  */
   
#include<stdio.h>
int  main()
{
int totrow, row,space,astrik;
printf("\n how many number of rows do you wish to print : \n");
scanf("%d",&totrow);
printf("\n");
	for(row=1;row<=totrow;row++)
	{
		for(space=1; space<=(totrow-row); space++) /* row increases,
		                                             space decrease */
		{
		printf(" ");
		}
		for(astrik=1;astrik<=(2*row)-1; astrik++) 
		{
		printf("*");
		}
	printf("\n");
	}

return 0;
}

