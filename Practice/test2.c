#include <stdio.h>

// void modify_my_param(int m)
// {
//   m = 402;
// }

// int main()
// {
//   int n;

//   n=98;
//   modify_my_param(n);
//   return 0;
// }
// void reset_to_98(int *n);
// void reset_to_98(int *n)
// {

// *n = 98;
// }

void swap_int(int *a, int *b);
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;

}

int main ()
{
int x =30;
int y =28;

swap_int(&x, &y);
printf("The new value of x is %d and the new value of y is %d\n", x, y );

return (0);
}