#include "lists.h"

/**
 * sum_listint - summation function
 * @head: pointer to the first node of the list
 * Return: sum_listint
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
