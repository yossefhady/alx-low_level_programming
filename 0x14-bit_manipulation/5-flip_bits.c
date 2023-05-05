#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n.
 *
 * Return: The number of bits to flip to get n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xnor = n ^ m;
	unsigned long int bit = 0;

	while (xnor > 0)
	{
		bit += (xnor & 1);
		xnor >>= 1;
	}

	return (bit);
}
