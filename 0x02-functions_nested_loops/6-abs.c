#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _abs - check the code
 *  *@c: letter being tested
 * Return: Always 0.
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	return (c);
}
