#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: num of args
 * Return: sum of params
 */
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
