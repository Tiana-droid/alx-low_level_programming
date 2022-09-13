#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;

	while (i < 10)
	{
		c = 97;

		while (c < 123)
		{
			putchar(c);
			c++;
		}

		putchar(10);
		i++;
	}
}
