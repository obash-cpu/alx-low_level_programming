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
	char destination[30] = "my c string ";
	char source[30] = "practice made clear";

	strcat(destination, source);
	printf("Concatenated String: %s\n", destination);
	return (dest);
}

