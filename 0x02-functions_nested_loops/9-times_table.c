#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 * Desription: prints the 9 times table
 *
 * Retutrn: void
*/
void times_table(void)

{
	int col = 0;
	int row = 0;
	int units = 0;
	int tens = 0;
	int n = 0;

	while (row < 10)
	{
		while (col < 10)
		{
		n = col * row;
		units = n % 10;
		tens = (n - units) / 10;
		if (col > 0)
		{
			_putchar(' ');
			(tens <= 0) ? _putchar(' ') : _putchar(tens + '0');
		}
		_putchar(units + '0');
		if (col < 9)
			_putchar(44);
		col++;
	}
	col = 0;
	row++;
	_putchar(10);
}
