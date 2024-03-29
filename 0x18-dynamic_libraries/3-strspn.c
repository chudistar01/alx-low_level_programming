#include "main.h"
/**
 * _strspn -  function that gets the length
 * of a prefix substring
 * @s: parameter of the function
 * @accept: parameter of the function
 * Return: length of occurance
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}

