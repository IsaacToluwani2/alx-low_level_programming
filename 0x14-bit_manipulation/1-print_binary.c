#include "main.h"

/**
 * print_binary - Print a binary representation of the number.
 * @n: The number printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
