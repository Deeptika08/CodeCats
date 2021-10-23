#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,sq,ac;
float root1, root2,D;
printf("\n enter the value of a: \n");
scanf("%d",&a);
printf("\n enter the value of b: \n");
scanf("%d",&b);
printf("\n enter the value of c: \n");
scanf("%d",&c);
sq=b*b;
ac=a*c;
D=sq-4*ac;

	if(D>0)
	{
	printf("\n Roots are distinct and real:\n");
	root1= (-b+sqrt(D))/ (2*a);
	root2= (-b-sqrt(D))/ (2*a);
	printf("\n Roots are %.2f and %.2f:\n", root1,root2);
	}
	/* a=2, b=-11, c=5  */
	else if(D==0)
	{
	printf("\n Roots are equal and real:\n");
	root1= (-b)/ (2*a);
	root2= (-b)/ (2*a);
	printf("\n Roots are %.2f and %.2f:\n", root1,root2);
	}
	/*a=1,b=-4,c=4*/
	else
	{
	printf("since D<0 NO REAL ROOTS EXIST!");
	}
	/*a=4,b=4,c=4*/

return 0;
}

