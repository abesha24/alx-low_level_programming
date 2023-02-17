#include<stdio.h>
/**
* main - Entry point
*
* Description:Write a program that prints all the numbers of base 16 in
* lowercase, followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{	char ch;

	/* your code goes there */
	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
