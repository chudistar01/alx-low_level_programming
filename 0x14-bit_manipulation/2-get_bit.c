#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer number
 * @index: index number
 * Return: bit value at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}

