#include <stdio.h>

int main(void)
{
int i, j;
for (j = 0; j < 11; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
}
putchar('\n');
}
