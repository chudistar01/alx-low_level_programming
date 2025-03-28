#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
	  return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	  *(array + i) = c;
	}

	return (array);
}
	  
