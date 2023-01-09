#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the program arguments.
 *
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int i, j, k = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		k += atoi(argv[i]);
	}

	printf("%d\n", k);

	return (0);
}
