#include "main.h"

/**
 * _strchr - returns the occurrence of character c
 * @c: is the character to look for
 * @s: is the string where to look for c
 * Return: a pointer to the string s
 */
char *_strchr(char *s, char c)
{
	while (*s !=  '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);


}
