#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits.
 * The three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1, and 2.
 * Print only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with three digits.
 * You can only use the putchar function,
 * (every other function (printf, puts, etc…) is forbidden).
 * You can only use putchar six times maximum in your code.
 * You are not allowed to use any variable of type char.
 * All your code should be in the main function.
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			for (c = b + 1; c < 58; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a < 55 || b < 56 || c < 57)
				{
				putchar(44);
				putchar(32);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
