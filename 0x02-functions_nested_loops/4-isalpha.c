#include "main.h"

/**
 * _isalpha - look for lower case
 * @c: The character to print
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

