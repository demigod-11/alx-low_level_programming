#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - ......
* @head: ....
*
* Description: .........
* Return: ....
*/

int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

if (*head == NULL)
{
return (0);
}

n = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);

return (n);
}
