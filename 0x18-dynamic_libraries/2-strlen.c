#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: parameter of the function
 * Return: length of the function
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
