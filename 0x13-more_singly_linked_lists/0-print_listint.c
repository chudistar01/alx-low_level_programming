#include "lists.h"

/**
 *print_listint-function that prints all the elements of
 *a listint_t list
 *@h:linked list to be printed
 *Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%i\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
