#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination
 * @src: source string
 * @n: number of string to concatenate
 * Return: a pointer to the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}
	return (dest);
}
