#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * write the the lower-case alphabet on a line
 *
 * Return: On success 1
*/

void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0 ; i < 10 ; i++)
{
for (letter = 'a' ; letter <= 'z' ; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
