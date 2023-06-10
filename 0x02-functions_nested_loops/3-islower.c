#include "main.h"

int _islower(int c)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
if (c == 'c')
{
return (1);
}
    
}
return (0);
}