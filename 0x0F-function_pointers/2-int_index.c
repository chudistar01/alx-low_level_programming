#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: function pointer
 * Return: returns the index of the first element for which
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

