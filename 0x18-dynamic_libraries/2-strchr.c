#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: parameter of the function
 * @c: parameter of the function
 * Return: new memory address
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
