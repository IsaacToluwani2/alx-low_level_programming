#include "main.h"

#include "main.h"

/**
 * main - look for lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}