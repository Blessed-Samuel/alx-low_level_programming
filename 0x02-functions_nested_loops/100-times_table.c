#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;

			if (j != 0)
			{
				printf(", ");
			}

			if (k < 10)
			{
				printf(" %d", k);
			}
			else if (k < 100)
			{
				printf(" %d", k);
			}
			else
			{
				printf(" %d", k);
			}
		}
		printf("\n");
	}
}
