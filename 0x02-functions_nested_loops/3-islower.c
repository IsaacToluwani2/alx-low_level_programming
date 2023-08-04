#include "main.h"

/**
 * _islower - look for lower case
 * @c: the parameter for the _islower function
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
