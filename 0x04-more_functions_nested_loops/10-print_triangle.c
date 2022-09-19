#include "main.h"

/**
 * print_triangle - to print triangle
 *
 * @size: parameter
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int hash, space, line = 0;

	if (size > 0)
	{
		while (line < size)
		{
			for (space = size - 1; space > line; space--)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < line + 1; hash++)
			{
				_putchar('#');
			}
			_putchar(10);
			line++;
		}
	}
	else
		_putchar(10);
}
