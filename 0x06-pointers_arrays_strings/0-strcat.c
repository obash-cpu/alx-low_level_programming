#include "main..h"
#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 * @src: is the source string to be appended
 * @dest: the string to append
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char src[] = "hello";
	char dest[DEST_SIZE] "world";

	strcat(dest, src, 5);
	printf(dest);

	return (0);
}

