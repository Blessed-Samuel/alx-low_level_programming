#include <stdio.h>

/**
 * main - main block
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	printf("\n");
	return (0);
}
