#include "lists.h"

/**
 * print_dlistint - function that prints all the
 * elements of a dlistint_t list
 * @h: pointer to linked list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_number = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		node_number = node_number + 1;

		h = h->next;
	}
	return (node_number);
}
