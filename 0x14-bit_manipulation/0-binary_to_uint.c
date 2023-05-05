#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary number
 *
 * @b: pointer to string
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *	Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);
	while ((b[len] == '0') || (b[len]) == '1')
	{
		number <<= 1;
		number += (b[len] - '0');
		len++;
	}
	if (len == ((int)strlen(b)))
		return (number);
	return (0);
}
