#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: return zero if receive two arguments
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
