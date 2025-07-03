#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: return only zero
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
