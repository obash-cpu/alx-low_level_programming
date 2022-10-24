#include "main.h"

/**
 * prin_line - a funcltion that draws a straight line in the terminal.
 * followed by a nwe line.
 * @n: An input integer
 * Return: Alwaysm0
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)

	{

	for (; i < n; i++)
	_putchar('-');

	}

	_putchar('\n');
}
