#include <stdio.h>

/**
 * main - main block
 * Description: A program that prints all possible combinations of,
 * two two-digit numbers.
 * The numbers should range from 0 to 99.
 * All numbers should be printed with two digits.
 * The combination of numbers must be separated by comma,
 * followed by a space1 should be printed as 01.
 * The combinations of numbers should be printed in ascending order.
 * 00 01 and 01 00 are considered as the same combination of,
 * the numbers 0 and 1.
 * only allowed to use the putchar function (every other function,
 * (printf, puts, etc…) is forbidden).
 * You can only use putchar eight times maximum in your code.
 * You are not allowed to use any variable of type char.
 * All your code should be in the main function.
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar((i % 10) + '0');
			putchar((i / 10) + '0');
			putchar(' ');
			putchar((j % 10) + '0');
			putchar((j / 10) + '0');

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

