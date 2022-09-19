#include <stdio.h>

/**
 * main - print fizz buzz
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			puts("fizz ");
		}
		else if (i % 5 == 0)
		{
			puts("buzz ");
		}
		else
			printf("%d ", i);
	}
	return (0);
}
