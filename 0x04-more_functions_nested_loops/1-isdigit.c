#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character
 * Return: 1
 */

int _isdigit(int c)
{
	if (c >= '0' && <= '9')
	{
		return (1);
	}
	else
		return (0);
}
