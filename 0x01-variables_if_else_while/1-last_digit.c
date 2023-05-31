#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main -
 *
 * Return: 
 */
int main(void)
{
	int n, lDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
    lDigit = abs(n) % 10;

    printf(" Last digit of %d is", n);
    if (lDigit > 5)
    {
        printf("and is greater than 5\n");
    }
    if (lDigit == 0)
    {
        printf ("and is 0\n");
    }
    if ((lDigit < 6) && (lDigit != 0) )
    {
        printf("and is less than 6 and not 0\n");
    }
    
    
	return (0);
}