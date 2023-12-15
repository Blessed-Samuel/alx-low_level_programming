#include <stdio.h>

/**
 * main - main block
 * Description: a program that prints all possible,
 * combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space.
 * Numbers should be printed in ascending order.
 * You can only use the `putchar` function.
 * All your code should be in the main function.
 * You can only use putchar four times maximum in your code.
 * You are not allowed to use any variable of type `char`.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
