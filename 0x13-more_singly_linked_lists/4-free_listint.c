#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;

		free (head);

		head = temp;
	}
}
