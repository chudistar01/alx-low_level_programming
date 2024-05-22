#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
  size_t i, left, right;
  if (array == NULL)
	  return (-1);
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