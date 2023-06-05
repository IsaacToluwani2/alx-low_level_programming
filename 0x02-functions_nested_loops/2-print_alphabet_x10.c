#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char i, j;
j = 0;

while (j < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
i++;
}
_putchar(10);
return (0);
}