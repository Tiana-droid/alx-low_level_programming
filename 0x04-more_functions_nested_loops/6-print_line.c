#include "main.h"

/**
 * print_line - print a straight line
 *@n: parameter
 * Return: 0
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
