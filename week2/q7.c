#include <stdio.h>

static int countzeroes(int n)
{
    int num = 0;
    while (n>0) {
        num=num+(n/5);
         n=n/5;
    }
     return num;
}
int main()
{
    int n=6;
    printf("\nNumber of zeroes of factorial %d is %d ", n, countzeroes(n));
    n=60;
    printf("\nNumber of zeroes of factorial %d is %d ", n, countzeroes(n));
	n=160;
    printf("\nNumber of zeroes of factorial %d is %d ", n, countzeroes(n));
	n=1234;
    printf("\nNumber of zeroes of factorial %d is %d ", n, countzeroes(n));

    return 0;
}

