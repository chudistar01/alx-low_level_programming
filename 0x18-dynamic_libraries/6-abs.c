#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @value: parameter of the function
 * Return: absolute value
 */
int _abs(int value)
{
	if (value < 0)
	{
		value = value * -1;
		return (value);
	}
	else
		return (value);
}
