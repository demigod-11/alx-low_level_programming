#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Function print numbers from 0-14 *10
 * Return: Void
 */

void  more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (j = 0; j <= 14; j++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}

}
