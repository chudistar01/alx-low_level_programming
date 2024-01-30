#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: parameter of the function
 * @b: parameter of the function
 * @n: param of the function
 * Return: pointer to  memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
