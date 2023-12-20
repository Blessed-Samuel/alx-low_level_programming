#include "main.h"

/**
 *  print_alphabet_x10 - Print alphabet in lowercase 10 times
 *  Return 0
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int count;

	for  (count = 0; count < 10; count++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
	}
}
