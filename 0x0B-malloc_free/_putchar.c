#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c the stdout
 * @c: the character to be printed
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
