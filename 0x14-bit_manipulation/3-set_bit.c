#include "main.h"

/**
 * set_bit - Set a value of the bit at a given index to 1.
 * @n: A pointer to a bit.
 * @index: The index is set the value - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
