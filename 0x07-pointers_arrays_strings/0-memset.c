#include "main.h"

/**
 * _memset- fills memory with a constant byte
 * s: memory area to be filled
 * b: char to copy
 * n: number of times to copy b.
 * Return: pointer to the areas s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int w;

	w = 0;
	while (w < n)
	{
		s[w] = b;
		w++;
	}
	return (s);
}
