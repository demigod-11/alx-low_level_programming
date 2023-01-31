#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - ......
 * @head: ....
 *
 * Description: .........
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
