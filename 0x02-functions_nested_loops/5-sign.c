#include "main.h"

/**
 * print_sign - look for lower case
 * @c: The character to print
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n>0)
{
_putchar('+');
putchar('\n');
return (1);
}
if (n = 0)
{
_putchar('0');
putchar('\n');
return (0);

}
if (n < 0)
{
_putchar('-1');
putchar('\n');
return (-1);
}
}
