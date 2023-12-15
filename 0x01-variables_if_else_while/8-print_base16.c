#include <stdio.h>

/**
 * main - main block
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char i;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}

	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
