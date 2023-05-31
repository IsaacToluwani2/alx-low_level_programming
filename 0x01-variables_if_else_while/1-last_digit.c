#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, lDigit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    lDigit = (n) % 10;

    printf("Last digit of %d is %d ", n, lDigit);
    if (lDigit > 5)
    {
        printf("and is greater than 5\n");
    }
    if (lDigit == 0)
    {
        printf("and is 0\n");
    }
    if ((lDigit < 6) && (lDigit != 0))
    {
        printf("and is less than 6 and not 0\n");
    }

    return (0);
}
