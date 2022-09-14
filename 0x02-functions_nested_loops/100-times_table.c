#include "main.h"

/**
 * print_times_table - entry point
 *
 * @n: parameter with type n
 *
 * Return: Always 0 (Success)
 */

int print_times_table(int n)
{
	int j, result;
	n = 0;

	while (n < 15)
	{
		_putchar('0);
		j = 1;

		while (j < 15)
		{
			_putchar(',');
			_putchar(' ');

			result = n * j;
			j++;

			if (num <= 15)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		i++;
		_putchar('\n');

		if (n < 0 || n > 15)
		{
		}
	}
}
