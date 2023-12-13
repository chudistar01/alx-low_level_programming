#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: pointer to the linked list
 * Return: counter
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_n = NULL;
	const listint_t *l_n = NULL;

	size_t counter = 0;
	size_t new_n;

	temp_n = head;

	while (temp_n)
	{
		printf("[%p] %d\n", (void *)temp_n, temp_n->n);
		counter++;
		temp_n = temp_n->next;

		l_n = head;

		new_n = 0;

		while (new_n < counter)
		{
			if (temp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)temp_n, temp_n->n);
				return (counter);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
