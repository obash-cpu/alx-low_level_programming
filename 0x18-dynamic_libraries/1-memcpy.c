#include "main.h"

/**
 *_memcpy - coppies n bytes to a memory
 * @dest: the string to copy to
 * @src: the string to coppied
 * @n: length of buffer
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
