#include<stdio.h>
int main()
{
int ch;
char input;

do{
printf("\n Give an input to see if it'a an ALPHABET, DIGIT or SPECIAL CHARACTER: \n ");
scanf("%c",&input);

    printf("ASCII value of %c = %d", input,input);
    
	if(input>=65 && input<91)
	{
	printf("\n given input is a capital letter");
	}
	else if(input>=97 && input<123)
	{
	printf("\n given input is a small letter");
	}
	else if(input>=48 && input<58)
	{
	printf("\n given input is number");
	}
	else if(input>=33 && input<65)
	{
	printf("\n given input is a special character");
	}
	else
	{
	printf("\n Character entered by you is not covered in this program");
	}

printf("\n\n\nEnter any key to check its category OR press 0 to exit: ");	 
scanf("%d",&ch);
}
while(ch!=0);

return 0;
}

