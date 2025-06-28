#include "main.h"

/**
 * reverse_array - desciption
 * @a: the array to reverse
 * @n: number of elements to reverse.
 */


void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	n--;
	for (i = 0; i < n ; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
