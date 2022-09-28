#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: int
 * Return: integer
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
