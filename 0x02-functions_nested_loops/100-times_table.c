#include "main.h"
#include <stdio.h>
/**
 * print_times_table- prnits the n table
 * @n: the times table to be printed
 * Return: void
 */
void print_times_table(int n)
{
	int a = 0;

	if (n >= 0 && n <= 15)
	{
		while (a <= n)
		{
			int b = 1;

			_putchar('0');
			while (b <= n)
			{
				int p = a * b;

				_putchar(',');
				_putchar(' ');
				if (p < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p > 99)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
