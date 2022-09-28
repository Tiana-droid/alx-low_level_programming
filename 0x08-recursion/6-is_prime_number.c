#include "main.h"

/**
 * is_prime_number - prints 1 if an integer is a prime number, otherwise 0
 * @n: num
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	else if (n / n == 1)
		return (1);
	return (0);
}
