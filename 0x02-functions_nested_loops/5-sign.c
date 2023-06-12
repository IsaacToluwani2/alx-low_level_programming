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
_putchar(43);
return (1);
}
if (n == 0)
{
_putchar(48);
return (0);

}
if (n < 0)
{
_putchar(45);
return (-1);
}
return 0;
}
