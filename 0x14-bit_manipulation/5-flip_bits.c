#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, comp, comp1;

	while (!(n == 0 && m == 0))
	{
		comp = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comp != comp1)
			flip += 1;
	}
	return (flip);
}
