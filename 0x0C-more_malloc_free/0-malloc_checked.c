#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc.
  * @b: size of memory to be allocated.
  *
  * Return: address.
  */

void *malloc_checked(unsigned int b)
{
	void *address = malloc(b);

	if (address == NULL)
	{
		exit(98);
	}

	return (address);
}
