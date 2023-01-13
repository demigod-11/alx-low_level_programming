#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: address or NULL
  */
int *array_range(int min, int max)
{
	int i, j;
	int *address;

	i = 0;

	if (min > max)
	{
		return (NULL);
	}

	i = ((max + 1) - min);

	address  = malloc(i * sizeof(i));

	if (address == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		*(address + j) = min + j;
	}

	return (address);
}
