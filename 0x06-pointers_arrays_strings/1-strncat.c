#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination
 * @src: source string
 * @n: number of string to concatenate
 * Return: a pointer to the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[1] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		deast[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
