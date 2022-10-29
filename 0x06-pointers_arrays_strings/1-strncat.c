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
	int m;
	int n;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
	{
		breaj;
	}
		m++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
