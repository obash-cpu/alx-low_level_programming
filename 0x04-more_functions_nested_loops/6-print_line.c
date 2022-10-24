#include "main.h"

/**
 * prin_line - a funcltion that draws a straight line
 * followed by a nwe line.
 * @n: An input integer
 * Return: Always 0
 */

void print_line(int n)
{
	int c;

	c = 0;

	while (c < n)

	{

	_putchar('-');

	c++;

	}

	_putchar('\n');
}
