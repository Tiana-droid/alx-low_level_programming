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
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	else
	{
		_putchar(0);
		return (0);
	}

}
