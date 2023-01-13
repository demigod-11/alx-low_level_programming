#include <stdlib.h>
#include "main.h"
/**
  * _calloc - allocates memory of an array using malloc.
  * @nmemb: number of elements in array.
  * @size: size of elements of array.
  *
  * Return: address or NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *address;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	address = malloc(nmemb * size);
	if (address  == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(address) + i) = 0;
	}

	return (address);
}
