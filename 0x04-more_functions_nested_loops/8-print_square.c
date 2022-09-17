#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of square
 *
 * Return: 0
 */

void print_square(int size)
{
	int i, j, square = '#';

	if (size > 0)
	{

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(square);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
