/*in the inner for loop for X pattern
	1) the asterisk diagonal from left to right follows -> (ROW=COLUMN)
	2)the other diagonal follows -> (ROW+COL = TOT_ROW+1)
	*/
#include<stdio.h>
int main()
{
int row,col,tot_row=9;
	
	for(row=1;row<=tot_row; row++)
	{
		for(col=1;col<=tot_row;col++)
		{
		if((row==col) || (row+col==tot_row+1)) 
		{
		printf("*");
		}
		else
		printf(" ");
		}
	printf("\n");
	}
return 0;
}

