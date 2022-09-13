#include "main.h"

/**
 * print_sign - entry point
 *
 * @n: parameter with type int
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	n = 8;

	if (n > 0)
	{
		_putchar(43);
		_putchar(',');
		_putchar(' ');
		return (1);

		else if (n = 0)
		{
			_putchar(0);
			_putchar(',');
			_putchar(' ');
			return (0);
		}

		else if (n < 0)
		{
			_putchar(45);
			_putchar(',');
			_putchar(' ');
			return (-1);
		}
	}
}
