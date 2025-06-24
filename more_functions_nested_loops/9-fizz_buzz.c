#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * The “Fizz-Buzz test” is an interview question designed
 * a program that prints the numbers from 1 to 100
 * multiples of three print Fizz
 * multiples of five print Buzz
 * both three and five print FizzBuzz
 * Return: always 0 (sucess)
 */

int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		if ((n % 3) != 0 && (n % 5) != 0)
		{
			printf("%d", n);
		}
		else if ((n % 3) == 0 && (n % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((n % 3) != 0 && (n % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz");
		}
		if (n < 100)
			putchar(' ');
	}
putchar('\n');
return (0);
}
