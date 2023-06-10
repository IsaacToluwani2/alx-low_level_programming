#include "main.h"

/**
 * -islower - look for lower case
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
