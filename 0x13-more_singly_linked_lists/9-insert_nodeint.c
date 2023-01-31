#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *current = *head;
unsigned int i;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; current != NULL && i < idx - 1; i++)
current = current->next;

if (current == NULL)
{
free(new);
return (NULL);
}

new->next = current->next;
current->next = new;
return (new);
}
