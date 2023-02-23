#include "main.h"
#include <ctype.h>

/**
 * _isupper- check for upper char
 * @c: the character
 * Return: 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);

}
