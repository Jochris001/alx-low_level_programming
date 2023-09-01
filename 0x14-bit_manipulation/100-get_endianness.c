#include "main.h"

/**
 *get_endianness - one needs to checks if a machine is little or big endian
 * Return: use 0 for big, use 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
