#include "lists.h"
/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list
 * @h: pointer to the lists
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_number = 0;

	while (h != NULL)
	{
		node_number = node_number + 1;
		h = h->next;
	}
	return (node_number);
}

