#include<stdio.h>
/**
* main - Entry point
*
* Description: ' prints the alphabet in lowercase, followed by a new line.'
*
* Return: Always 0 (Success)
*/
int main(void)
{	char ch;

	/* your code goes there */
	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
