#include "main.h"

/**
 * leet - encode
 * @s: pointer to params
 * Return: *s
 */
char *leet(char *s)
{
	int i;

	intj;

	char 1[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)

	{
		for (j = 0; 1[j] != '\0'; j++)
		{
			if (s[i] == l[j] || s[i] == (l[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
