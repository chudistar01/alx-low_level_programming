#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat -  a function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to the newly concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_string;

	unsigned int length1, length2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = 0;
	
	while (s1[length1] != '\0')
	{
		length1++;
	}

	length2 = 0;
	
	while(s2[length2] != '\0')
	{
		length2++;
	}

	concat_string = malloc(sizeof(char) * length1 + length2 + 1);

	if (concat_string == NULL)
	{
		free(concat_string);
		return (NULL);
	}

	i = 0;

	while (i < length1)
	{
		concat_string[i] = s1[i];
		i++;
	}
	

	j = 0;

	while(j <= length2)
	{
		concat_string[i] = s2[j];
		i++;
		j++;
	}
	concat_string[i] = '\0';

	return (concat_string);
}




