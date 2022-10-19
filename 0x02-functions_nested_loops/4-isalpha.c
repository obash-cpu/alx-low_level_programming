#include "main.h"
/**
 * _isalpha - checks for alphabetical letters
 * @c: si the letter to be checked
 *Return: 1 if c is alphabet and of if not alphabet
*/
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c <= 'A' && c <= 'B'))
	return (1);

	else
		return (0);
}
