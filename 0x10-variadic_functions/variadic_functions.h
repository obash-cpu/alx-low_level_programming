#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer
 * @symbol: A symbol representing a data type
 * @print: A function pointer to a function that prints
 */

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
/**
 * struct op - Struct
 * @op: input
 * @func: function
 */
typedef struct op
{
	char *op;
	void (*func)(va_list al);
}  op_t;

#endif
