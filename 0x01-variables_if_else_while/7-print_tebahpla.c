#include<stdio.h>
/**
* main - Entry point
*
* Description: Write a program that prints the lowercase alphabet in reverse,
* starting from z, followed by a new line'
*
* Return: Always 0 (Success)
*/
int main(void)
{	char ch;

	/* your code goes there */
	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
