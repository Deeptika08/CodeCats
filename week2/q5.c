#include <stdio.h>

int i;
void revarr(int arr[])   /*function to store array of numbers to be reversed*/
{
    int temp;
    for (i=0; i<5/2; i++)  /*reversing until half the array
	                          if entirely reversed, it will go back to origanal */
    {
        
     temp = arr[i]; 
     arr[i] = arr[4-i]; /* index 4 refers to 5th number in our array*/
     arr[4-i] = temp;
    }
}

void printarr(int arr[])
{
    for (i=0; i<5; i++)
    {
    printf("\n %d", arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    printf("\n Before reversing the array\n");
    printarr(arr);
    revarr(arr);  /*reverses array by calling function*/
    printf("\n After reversing the array\n");
    printarr(arr);
    
    
    return 0;
}

