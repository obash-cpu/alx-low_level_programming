#include <stdio.h>
/**
 * main - prints 00 to 99 with no duplicate digit or combos: no 11, 10 (01)
 * Return: Always 0 (success)
 */

int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = (tens = 1); ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);

}
