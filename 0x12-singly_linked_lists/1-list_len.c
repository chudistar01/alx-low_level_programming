#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list
 * @h: pointer to the lists
 *
 * Return: size of linked list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
