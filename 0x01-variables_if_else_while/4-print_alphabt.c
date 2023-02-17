#include<stdio.h>
/**
* main - Entry point
*
* Description: 'Print all the letters except q and e'
*
* Return: Always 0 (Success)
*/
int main(void)
{	char ch;

	/* your code goes there */
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'e' || ch == 'q')
		continue;
		putchar(ch);
	}
	putchar('\n');
return (0);
}
