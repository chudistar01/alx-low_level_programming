#include "main.h"
/**
 * _strpbrk - function that searches a string for
 *  any of a set of bytes
 *  @s: parameter of the function
 *  @accept: parameter of the function
 *  Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
