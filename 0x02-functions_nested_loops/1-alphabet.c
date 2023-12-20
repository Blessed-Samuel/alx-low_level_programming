#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase using only `putchar`
 * Description: you can only use outchar `twice` in you code.
 * Return: 0 (Success)
 */

void print_alphabet(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
