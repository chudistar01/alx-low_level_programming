#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary number
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	while (*b != '\0')
	{
		if ((*b == '1') || (*b == '0'))
		{
			result = (result << 1) + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}


