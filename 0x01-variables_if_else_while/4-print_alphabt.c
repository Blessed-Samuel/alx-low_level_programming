#include <stdio.h>

/**
 * main - main block
 * Description: prints alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}

	putchar('\n');
	return (0);
}
