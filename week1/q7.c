#include<stdio.h>
int main()
{
int amt,tot_notes;
int n1,n2,n5,n10,n20,n50,n100,n500,n1000;
n1=n2=n5=n10=n20=n50=n100=n500=n1000=0;
/*initialize to avoid getting garbage value in case of none*/

printf("\nEnter the amount to see note count: ");
scanf("%d",&amt);

	if(amt>=1000)
	{
	n1000=amt/1000;
	amt=amt-(n1000*1000);
	}
	if(amt>=500)
	{
	n500=amt/500;
	amt=amt-(n500*500);
	}
	if(amt>=100)
	{
	n100=amt/100;
	amt=amt-(n100*100);
	}
	if(amt>=50)
	{
	n50=amt/50;
	amt=amt-(n50*50);
	}
	if(amt>=20)
	{
	n20=amt/20;
	amt=amt-(n20*20);
	}
	if(amt>=10)
	{
	n10=amt/10;
	amt=amt-(n10*10);
	}
	if(amt>=5)
	{
	n5=amt/5;
	amt=amt-(n5*5);
	}
	if(amt>=2)
	{
	n2=amt/2;
	amt=amt-(n2*2);
	}
	if(amt>=1)
	{
	n1=amt/1;
	}
/*else if failed, rest is skipped*/

printf("\n\n for total amount of rs %d, required number of notes are %d", amt);
printf("\n\t 1000 rupee notes: %d", n1000);
printf("\n\t 500 rupee notes: %d", n500);
printf("\n\t 100 rupee notes: %d", n100);
printf("\n\t 50 rupee notes: %d", n50);
printf("\n\t 20 rupee notes: %d", n20);
printf("\n\t 10 rupee notes: %d", n10);
printf("\n\t 5 rupee notes: %d", n5);
printf("\n\t 2 rupee notes: %d", n2);
printf("\n\t 1 rupee notes: %d", n1);

tot_notes=n1+n2+n5+n10+n20+n50+n100+n500+n1000;
printf("\n\n\t number of total notes %d", tot_notes);
return 0;
}

