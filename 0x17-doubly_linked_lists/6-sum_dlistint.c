#include "lists.h"
/**
 * sum_dlistint - ..........................
 * @head: ..................................
 *
 * Return: ............................
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
