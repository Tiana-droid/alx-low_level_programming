#include "main.h"

/**
 * print_times_table - entry point
 *
 * @n: parameter with type n
 *
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int row, column, result;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');

			for (column = 0; column <= n; column++)
			{
				result = row * column;

				_putchar(',');
				_putchar(' ');
			}

			if (result <= 15)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
