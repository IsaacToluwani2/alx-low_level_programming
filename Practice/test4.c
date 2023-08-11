#include <stdio.h>

int main ()
{
char array_ch[7] = { 'H', 'e', 'l', 'l', 'o', '!', '\0'};
int i;

for ( i = 0; i < 7; i++)
{
printf ("array_ch[%d] contains: %c\n", i, array_ch[i]);
}

// method 1
for (i = 0; array_ch[i] != '\0' && i < 7; i++)
{
printf("%c\n", array_ch[i]);
}
// method 2
printf("%s\n", array_ch);
}