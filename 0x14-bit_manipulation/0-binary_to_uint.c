#include "main.h"

/**
 * binary_to_uint - This will be converting a binary number to an unsigned int
 * @b:It is containing string of the binary number
 *
 * Return: the converted number always
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
