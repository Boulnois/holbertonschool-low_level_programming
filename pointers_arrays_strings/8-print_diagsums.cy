include "main.h"
#include <stdio.h>

/**
 * print_diagsums- sum diagonal values
 * @a: pointer to array
 * @size: int
 *
 *Return: sum of two sides
 */

void print_diagsums(int *a, int size)
{
	unsigned int diagoOne, diagoTwo, sumOne, sumTwo;

	for (diagoOne = 0; diagoOne < size; diagoOne++)
	{
		sumOne += a[(size + 1) * diagoOne];
	}
	for (diagoTwo = 0; diagoTwo < size; diagoTwo++)
	{
		sumTwo += a[(size - 1) * (counter 2 + 1)];
	}
	printf('%d', '%d\n', sumOne, sumTwo);
}
