#include <stdio.h>

/**
 * main - main block
 * Desecription: `putchar` to print lowercase and also uppercase alphabeth.
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	char B = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (B <= 'Z')
	{
		putchar(B);
		B++;
	}

	putchar('\n');
	return (0);
}
