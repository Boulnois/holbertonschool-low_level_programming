
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
	int index;
	int i;
	int sum = 0;

	for (index = 1; index < argc; index++)
	{
		sum += atoi(argv[index]);
	}

	for (i = 0; argv[index][i] != '\0'; i++)
	{
		if (! isdigit(argv[index][i]))
		{
			printf("Error\n");
			return (0);
		}
		printf ("%d\n", sum);
	}
	return (0);
}
