#include "main.h"

/**
 * largest_number - returns the largest nujber
 * @a: first integer
 * @a: second integer
 * @a: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c,)
{
	int largest;

	if (a > b)
	{
		if (a > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (a < c)
			largest = c;
		else
			largest = b;
	}
	return (largest);
}
