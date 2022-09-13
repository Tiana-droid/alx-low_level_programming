#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 97;

		while (j < 123)
		{
			putchar(j);
			j++;
		}

		putchar(10);
		i++;
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
