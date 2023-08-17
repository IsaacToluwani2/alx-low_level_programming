#include <stdio.h>
#include <math.h>
#include <string.h>

//function
int add (int *a, int *b)
{
<<<<<<< HEAD
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
=======
int j = 5;
// int *p = &j;
printf ("the value of j is %d", * &j);
>>>>>>> 4f8518fc280a84d658713bcf3bf08cc463995378
return (0);
}
