#include "main.h"

/**
 * print_alphabet
 * write the the lower-case alphabet on a line.
 */


void print_alphabet(void)

{
char letter;

for (letter = "a"; letter <= "z"; letter++)
_putchar(letter);
_putchar('\n');
}
