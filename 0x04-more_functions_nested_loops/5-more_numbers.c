#include "main.h"
/**
 * more_numbers - a function that prints 10 times the number, from 0-14
 * _putchar only 3 times
 * Return: 0-14 x10 followed by a new line
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
	{
		if (ch >= 10)
		_putchar((ch / 10) + 48);
		_putchar((ch % 10) + 48);
	}
		_putchar('\n');
	}
}
