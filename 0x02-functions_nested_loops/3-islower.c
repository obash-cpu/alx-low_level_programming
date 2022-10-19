#include "main.h"
/**
 * _islower - Return 1 iif letter is lowercase
 * @c: is the letter to be checked
 * Return: 1 if lowercase, 0 if otherwise
*/
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
