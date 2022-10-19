#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase
 * Return: 0 when succesful
*/

void print_alphabet(void)

{
	char c = 'a';

	while (c <= 'z')

	{
		_putchar(c);
		c++;
	}

	_putchar('\n');

}
