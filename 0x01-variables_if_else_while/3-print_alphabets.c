#include <stdio.h>

/**
 * main - entry point
 *
 * Description: To print out alphabets in lower case and upper case
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
