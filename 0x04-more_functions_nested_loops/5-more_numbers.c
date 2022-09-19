#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{

	int line;
	int n = '0';
	int repeat = 0;
	int limit = '9';

	for (line = 0; line <= 10; line++)
	{
		while (repeat < 2)
		{
			while (n <= limit)
			{
				if (limit == '4')
					_putchar('1');
				_putchar(n);
				n++;
			}
			repeat++;
			limit = '4';
			n = '0';
		}
		_putchar('\n');
		repeat = 0;
		n = '0';
		limit = '9';
	}
}
