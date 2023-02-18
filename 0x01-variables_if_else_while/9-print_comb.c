#include<stdio.h>
/**
* main - Entry point
*
* Description: Write a program that prints all possible different combinations
* of single digit.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int d1;

	for (d1 = 48; d1 <= 57; d1++)
	{
		putchar(d1);
		if (d1 != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}
