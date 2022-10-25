#include "main.h"

/**
 * _puts - prints string
 * @str: char array string type
 * Description: Can only use _putchar
 */
void _puts(char *str)
{

	int i;

	for (i = o; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
