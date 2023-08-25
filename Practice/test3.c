#include <stdio.h>

int func(int *ptr)
{
printf ("The address of i is:%p\n", ptr );
}

int main ()
{
int i;
func(&i);
printf("The address of i is:%p\n", &i);
return 0;
}
