#include "search_algos.h"
/**
 * _binary_search: searches for value in an array
 * @array: array to be searched
 * @left: starting index with a subarray
 * @right: the ending index of a subarray
 * @value: value to be searched
 * Return: index
 */
int _binary_search(int array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
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

