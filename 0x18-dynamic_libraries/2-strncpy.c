#include "main.h"
/**
 * _strncpy -function that copies a string.
 * @dest: destination string
 * @src: source of the string
 * @n: n bytes to be copied
 * Return: pointer to new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
