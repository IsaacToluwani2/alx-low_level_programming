#include <stdio.h>

// function
void print_alphabet_x10(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
}
putchar(10);
}
// void print_alphabet(void)
// {
//   int i;
// for (i = 'a'; i <= 'z'; i++)
// {
//   putchar(i);
// }
// putchar(10);
// }

int main(void)
{
    print_alphabet_x10();
    return (0);
}