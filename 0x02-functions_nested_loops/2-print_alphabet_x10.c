#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char word[] = "abcdefghijklmnopqrstuvwxyz";
	int count = strlen(word);
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{

		for (i = 0; i < count; i++)
		{
			_putchar(word[i]);
		}
		_putchar('\n');
	}
}
