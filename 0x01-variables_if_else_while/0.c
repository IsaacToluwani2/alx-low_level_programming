#include <stdio.h>

/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i, j;
j = 0;
while (j < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
j++;
}

return 0;
}
