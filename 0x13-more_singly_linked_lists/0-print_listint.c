#include "lists.h"

/**
 *print_listint - a function that prints all the elements of
 *a listint_t list
 *@h: linked list to be printed
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	const listint_t *tp;
	tp = h

	while (tp)
	{
		printf("%d\n",tp->n);
		num++;
		tp = tp->next;
	}
	return (num);
}
