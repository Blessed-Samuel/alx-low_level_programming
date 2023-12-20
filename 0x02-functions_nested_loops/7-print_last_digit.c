#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @x: int type number
 * Return: return value of last digit
 */

int print_last_digit(int x)
{
	int n, y;

	if (x < 0)
	{
		n = -1 * (x % 10);
		_putchar(n + '0');
		return (n);
	}
	else
	{
		y = x % 10;
		_putchar(y + '0');
		return (y);
	}
}
