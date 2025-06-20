#include "main.h"

/**
 * print_alphabet - Entry point
 * write the the lower-case alphabet on a line
 *
 * Return: On success 1. 
*/


void print_alphabet(void)

{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
