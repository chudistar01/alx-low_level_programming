#include "search_algos.h"
/**
 * binary_search - binary searched
 * @array: pointer to an array
 * @size: size of array
 * @value: value to be searched
 * Return: index of the serached value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (right >= left)
	{
		printf("Searching in array: ");
		i = left;
		while (i < right)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
