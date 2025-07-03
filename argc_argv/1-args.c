#include <stdio.h>

/**
 * main - main - a program that prints he number of arguments passed into it
 * @argc: The total number of command line arguments
 * @argv: arrays of arguments
 * Return: Returns 0 upon successful execution.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
