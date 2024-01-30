#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: destination string
 * @src: source string
 * Return: new string
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
	{
		length++;
	}

	i = 0;

	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

