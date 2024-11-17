#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string to be copied
 * Return: New string
 */
char *_strdup(char *str)
{
	char *new_string;

	unsigned int length;
	unsigned int i;

	if (str == NULL)
	{
	  return (NULL);
	}
	
	    

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	
	new_string = malloc(sizeof(char) * (length + 1));

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
	  *(new_string + i) = *(str + i);
	}
	*(new_string + length) = '\0';

	return (new_string);
}



