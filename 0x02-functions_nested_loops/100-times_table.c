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
	int row, column, product;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <=n; column++)
			{
				product = row * column;

				if (column == 0)
					_putchar('0');
				else if (product >= 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product < 15)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
