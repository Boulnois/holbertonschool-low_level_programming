#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - The entry point for the calculator program.
 * @argc: The number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, or exits with an error code on failure.
 */

int main(int argc, char *argv[])
{
	/* Variables to store operands and the result. */
	int a, b, result;

	/* Pointer to function that performs the operation. */
	int (*operation)(int, int);

	/* Check if arguments is 4 (program name + two numbers + operator). */
	if (argc != 4)
	{
		printf("Error\n");
	/* Exit with code 98 if the number of arguments is incorrect. */
		exit(98);
	}
	/* Get the appropriate operation function based on the operator argument. */
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		/* Exit with code 99 if the operator is not recognized. */
		exit(99);
	}
		/* Convert the input strings to integers. */
		a = atoi(argv[1]);
		b = atoi(argv[3]);
	/* Check for division or modulus by zero, which is not allowed. */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		/* Exit with code 100 for division or modulus by zero. */
		exit(100);
	}
	/* Perform the operation and store the result. */
	result = operation(a, b);
	/* Print the result of the operation. */
	printf("%d\n", result);
	/* Return 0 to indicate successful completion. */
	return (0);
}
