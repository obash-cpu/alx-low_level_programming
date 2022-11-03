#include "main.h"

/**
 * int _strspn - gets the length of a prefix substring
 * @s: the string to loook for the prefix
 * @accept: substring of the accepted character
 * Return: length of the occurrence
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
