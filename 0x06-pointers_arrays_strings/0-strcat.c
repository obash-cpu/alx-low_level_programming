#include "main..h"

/**
 * _strcat - a function that concatenates two strings
 * @src: is the source string to be appended
 * @dest: the string to append
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char destination[] = "my c string ";
	char source[] = "practice made clear";

	strcat(destination, source);
	printf("Concatenated String: %s\n", destination);
	return (0);
}

