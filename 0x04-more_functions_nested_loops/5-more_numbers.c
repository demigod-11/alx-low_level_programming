#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Function print numbers from 0-14 *10
 * Return: Void
 */

void  more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{	
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchat(i % 10 + '0');
		}
		 _putchar('\n');
	}

}