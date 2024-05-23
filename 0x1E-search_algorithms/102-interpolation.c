#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * @size: size of the array
 * @value: value to be searched
 * Return: index of the found element
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;

	while (size)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
			break;
		else
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (int)pos;
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high)
			break;
	}
	return (-1);
}

