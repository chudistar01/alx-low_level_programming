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
	char *array_of_char;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array_of_char = malloc(sizeof(char) * size);

	if (array_of_char == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;

		while (i < size)
		{
			*(array_of_char + i) = c;
			i++;
		}

		*(array_of_char + i) = '\0';
	}

	return (array_of_char);
}
