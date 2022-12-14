#include "main.h"

/**
 * times_table - entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i = 0, j, num;

	while (i <= 9)
	{
		_putchar('0');
		j = 1;

		while (j <= 9)
		{
			_putchar(',');
			_putchar(' ');

			num = i * j;
			j++;

			if (num <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}
