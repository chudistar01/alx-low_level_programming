#include "search_algos.h"
/**
 * linear_search - function that searches for a value
 * in an array of integers using the Linear search algorithm
 *
 * @array: input array
 * @size: siize of the array
 * @value: value to be searched
 * Return: index of the searched ellement
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < (size_t)size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

