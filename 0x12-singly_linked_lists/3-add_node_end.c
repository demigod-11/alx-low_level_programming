#include "lists.h"
/**
 * add_node_end - .......
 * @head: ....
 * @str: ....
 * Return: ....
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;
	unsigned int l;

	temp = malloc(sizeof(list_t));

	if (str == NULL || temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	for (l = 0; str[l]; l++)
	{
		;
	}
	temp->len = l;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
