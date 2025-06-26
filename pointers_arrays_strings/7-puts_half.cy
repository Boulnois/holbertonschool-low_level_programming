#include "main.h"

void puts_half(char *str)
{
	int leng = 0;
	while (*(str + leng) != 0)
	{
		leng++;
	}
	if (!(leng % 2))
	{
		leng /= 2;
	}
	else leng = (leng + 1) / 2;

	while (*(str + leng)) != 0)
	{
		_putchar(str[leng]);
		leng++;
	}
	_putchar('\n');
}
