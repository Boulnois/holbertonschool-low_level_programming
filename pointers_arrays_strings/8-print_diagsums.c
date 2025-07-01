#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * print_diagsums- sum diagonal values
 * @a: pointer to array
 * @size: int
 *
 *Return: sum of two sides
 */

void print_diagsums(int *a, int size)
{
	int diagoOne;
	int diagoTwo;
	int sumOne;
	int sumTwo;

	sumOne = 0;
	sumTwo = 0;

	for (diagoOne = 0; diagoOne < size; diagoOne++)
	{
		sumOne += a[(size + 1) * diagoOne];
	}
	for (diagoTwo = 0; diagoTwo < size; diagoTwo++)
	{
		sumTwo += a[(size - 1) * (diagoTwo + 1)];
	}
	printf("%d, %d\n", sumOne, sumTwo);
}
