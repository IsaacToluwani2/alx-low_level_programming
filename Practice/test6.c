#include <stdio.h>

// Task 3
// Function
int func (int x)
{
// *x = (*x) * 10;
printf("10x of %d is %d", x,  ((x) * 10));
}

// Main Function
int main ()
{
int a = 20;
func(a);
// printf("10x of a is %d", func(&a));
}