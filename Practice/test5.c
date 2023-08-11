#include <stdio.h>

int main ()
{
char strt[] = {'A', 'n', 'o'};
char strt2[] = "Ano";

char *ptr_str;
int i;

// print out strt

for (i = 0; strt[i] ; i++)
{
printf("%c", strt[i]);
}
printf("\n");

// print out strt2
for (i = 0; strt2[i]; i++)
{
printf("%c", strt2[i]);
}

/* assign a string to a pointer */
ptr_str = "Ano";
for (i = 0; *ptr_str ; i++)
{

}

return (0);
}