#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte
 * @s: source string
 * @b: the constant byte for filing
 * @n: the length of buffer
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + 1) = b;
		i++
	}
	return (s);
}
