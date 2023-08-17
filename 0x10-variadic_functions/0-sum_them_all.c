#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Return the sum of all its paramter.
 * @n: The number of the paramter passed to thee function.
 * @...: A variable number of paramter to calculatee the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameter.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
