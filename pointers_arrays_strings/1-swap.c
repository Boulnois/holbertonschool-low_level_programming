#include "main.h"
/**
 * swap_int - values of two integers
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
