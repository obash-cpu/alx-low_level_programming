#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of paramters passed to the function
 * @...: A variable number of paramters to calculate the sum of
 * Return: If n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(al, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(al, int);
	}
	va_end(al);
	return (sum);
}
