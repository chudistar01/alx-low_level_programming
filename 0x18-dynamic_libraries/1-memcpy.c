#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: parameter of the function
 * @src: parameter of the function
 * @n: nbytes
 * Return: new memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
