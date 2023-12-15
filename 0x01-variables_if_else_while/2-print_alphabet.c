#include <stdio.h>

/**
 * main- - main block
 * Description: use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */

int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
