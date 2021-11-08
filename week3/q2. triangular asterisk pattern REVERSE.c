#include<stdio.h>
int main()
{
int i,j;
	for(i=1;i<5;i++)
	{
	for(j=5;j>=i;j--) /* this loops also guidefor the main condition to be 
                         checked for right symbol */
	{
	printf("*");
	}
	printf("\n");
	}

return 0;
}

