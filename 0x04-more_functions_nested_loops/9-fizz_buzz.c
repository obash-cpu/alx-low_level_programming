#include "main.h"
#include <stdio.h>
/**
 * main - main block, solves a fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, print fizz multiples of 5, print Buzz.
 * Multiples of both 3 and 5 should print FizzBzz.
 * Return: All good
 */
int main(void)
{
	int i = 1;

	for (; i < 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
