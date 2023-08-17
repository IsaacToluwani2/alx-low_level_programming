#include <stdio.h>
#include <math.h>
#include <string.h>

//function
int add (int *a, int *b)
{
*a = 56;	
int sum = *a + *b;
return sum;
}

//main function
int main () 
{
int x = 5;
int y = 6;
printf ("%d\n", add(&x, &y));
printf ("%d\n", x +  y);
return (0);
}
