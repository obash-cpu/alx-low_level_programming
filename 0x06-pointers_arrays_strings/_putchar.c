#include <unistd.h>
/**
 * _putchar - writes c
 * @c: char to be written
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
