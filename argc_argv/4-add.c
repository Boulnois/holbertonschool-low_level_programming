#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

/**
 * main - a program that adds positive numbers.
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: return zero if receive two arguments
 */

int main(int argc, char *argv[])
{
	int i;
	int b;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);

		for (b = 0; argv[i][b] != '\0'; b++)
		{
			if (!(isdigit(argv[i][b])))
			{
				printf("Error\n");

				return (0);
			}
		}
	}
	printf("%d\n", sum);

	return (0);
}
