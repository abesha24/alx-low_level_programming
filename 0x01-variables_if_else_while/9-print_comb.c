#include<stdio.h>
/**
* main - Entry point
*
* Description:Write a program that prints all possible combinations of
* single-digit numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{	int ch;

	/* your code goes there */
	for (ch = 0 ; ch <= 9 ; ch++)
	{
		putchar((ch % 10) + '0');
		if (ch == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
