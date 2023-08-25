#include <stdio.h>

int func (int *x, int *y)
{
int sum = (*x + *y);
float avg = (float) sum / 2;
printf("The sum of the values is:%d", sum);
printf("The average is: %f", avg);
}
int main ()
{
int i = 5;
int j = 6;
func(&i, &j);
return 0;
}