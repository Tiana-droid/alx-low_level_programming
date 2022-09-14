#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long long n = 50, num1 = 1, num2 = 2, next, c;

	for (c = 0; c <= n; c++)
	{
		if (c <= 1)
		{
			next = c;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		print("%d\n", next);
	}
	return (0);
}
