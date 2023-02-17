#include<stdio.h>
/**
* main - Entry point
*
* Description: 'Write a program that prints all single digit numbers of base 10
* starting from 0, followed by a new line'
*
* Return: Always 0 (Success)
*/
int main(void)
{	char ch;

	/* your code goes there */
	for (ch = 97 ; ch <= 106 ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
