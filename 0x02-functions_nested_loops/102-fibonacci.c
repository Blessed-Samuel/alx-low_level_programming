#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
	int count = 2;
	long int x = 1, y = 2;
	long int z;

	printf("%lu, ", x);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", y);
		}
		else
		{
			printf("%lu, ", y);
		}

		z = y;
		y += x;
		x = z;
		count++;
	}

	return (0);
}
