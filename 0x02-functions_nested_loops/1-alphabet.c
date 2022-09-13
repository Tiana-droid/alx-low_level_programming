#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Description: function to print alphabet in lower case.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c = 97;

	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
