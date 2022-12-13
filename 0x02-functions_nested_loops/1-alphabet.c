#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char word[] = "abcdefghijklmnopqrstuvwxyz";
	int count = strlen(word);
	int i;

	for (i = 0; i < count; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
}
