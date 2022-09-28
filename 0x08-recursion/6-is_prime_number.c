#include "main.h"

/**
 * is_prime_number - prints 1 if an integer is a prime number, otherwise 0
 * @n: num
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if  is prime
 * @n: num
 * @start: num to start checking
 *
 * Return: integer
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
