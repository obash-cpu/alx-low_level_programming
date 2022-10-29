#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: copy to
 * @src: copy from
 * @n: input number
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; && i < n; i++)
	{
	dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
	dest[i] = ''\0';
	}


	return (dest);
}
