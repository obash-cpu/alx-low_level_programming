#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the charcter to print
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
