#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
int i, j;
for (j = 0; j < 11; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
}
_putchar('\n');
}
