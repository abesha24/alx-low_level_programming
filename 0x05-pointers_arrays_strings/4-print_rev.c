#include "main.h"

/**
 * print_rev- a function that  prints
 * a string in revers
 * followed by a new line.
 * @s: is a string to be printed.
 */

void print_rev(char *s)
{
	int a, b, lent;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	lent = a;

	b = lent - 1;

	while (b >= 0)
	{
	_putchar(s[b]);

	b--;

	}

	_putchar('\n');

}
