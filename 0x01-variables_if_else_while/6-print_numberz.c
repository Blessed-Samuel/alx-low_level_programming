#include <stdio.h>

/**
 * main - main block
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}

	putchar('\n');
	return (0);
}
