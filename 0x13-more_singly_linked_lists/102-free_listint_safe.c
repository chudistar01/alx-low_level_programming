#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: pointer to the first node of the list
 * Return: number of element freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int diff;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

		*h = NULL;
		return (count);
}
