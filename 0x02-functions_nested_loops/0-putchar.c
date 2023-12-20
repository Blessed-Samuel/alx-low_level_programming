#include "main.h"

/**
 * main - prints 'putchar' followed by a new line.
 * Description: You are not allowed to use the standard Libraries.
 * Return: Always 0 (success)
 */

int main(void)
{
	char myVar[] = "_putchar";
	int i = 0;

	while (myVar[i] != '\0')
	{
		_putchar(myVar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
