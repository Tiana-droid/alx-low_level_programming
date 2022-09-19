#include "main.h"

/**
 * print_diagonal - entry
 * @n: parameter
 * Return: 0
 */

void print_diagonal(int n)
{
	int space, line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
