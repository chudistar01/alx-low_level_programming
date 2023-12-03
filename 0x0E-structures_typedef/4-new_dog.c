#include <stdlib.h>
#include "dog.h"
/**
 * string_length - returns the length of the a string
 * @s: string
 * Return: string's length
 */
int string_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * *_strcpy - a functions that copies src string to dest string
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;

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

/**
 * new_dog - creates new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int name_length, owner_length;

	name_length = string_length(name);

	owner_length = string_length(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (name_length + 1));
	dog->owner = malloc(sizeof(char) * (owner_length + 1));

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}





