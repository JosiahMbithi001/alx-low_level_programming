#include "variadic_functions.h"

/**
 * sum_them_all - A Function that sums all its Parameters.
 * @n: Last parameter
 * @...: The Other parameters
 * Return: The of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	double sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}

