#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

		while (*(s + count) != '\0')
		{
			for (i = 0; i < 52; i++)
			{
				if (*(s + count) == alphabet[i])
				{
					*(s + count) = rot13[i];
					break;
				}
			}
			count++;
		}
		return (s);
}
