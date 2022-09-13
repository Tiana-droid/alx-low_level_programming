#include <stdio.h>

/**
 * main - check the code
 *
 * Description: function to print alphabet in lower case.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
}

int main(void)
{
	print_alphabet();
	return (0);
}
