#include<stdio.h>

int main()
{
	int  face,N,tot;
	
	printf("\n Total number of coins : ");
	scanf("%d",&N);
	
	printf("\n Enter if coin face up is head or tail : ");
	scanf("%d",&face);
	
	printf("\n The coins that show total number of head or tail : ");
	scanf("%d",&tot);
	
	if(face==tot)
	{
	N = N/2;
	} 
	else 
	{
	N = (N+1)/2 ;
	}
	
	printf(" After flip the face UP opposite of the one entered %d " ,N );

return 0;	 
}

