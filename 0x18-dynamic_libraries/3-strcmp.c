#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 1 or 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
