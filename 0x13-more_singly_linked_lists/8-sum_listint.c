#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all data of a listint_t linked list
 * @head: pointer to head of linked list
 * Return: sum of all data in linked list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
