#include "main.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: integer number
 * @index: index number
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);

}

