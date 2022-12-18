#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: ......The number of paramters passed to the function
 * Return: If n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list argsptr;

	va_start(argsptr, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argsptr, int);
	}
	va_end(argsptr);
	return (sum);
}
