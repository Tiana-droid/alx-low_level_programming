#include "main.h"

/**
 * is_prime_number - prints 1 if an integer is a prime number, otherwise 0
 * @n: integer
 * Return: integer
 */

int is_prime_number(int n)
{

	if (n % n == n && n / n == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
