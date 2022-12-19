#include "main.h"
#include <stdio.h>

/**
* swap_int  - swap the values of two integers
* @a: number to swap (int)
* @b: number to swap (int)
* Return: Nothing.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = a;
	*a = b;
	*b = c;
}
