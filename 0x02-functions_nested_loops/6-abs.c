#include "main.h"
#include <stdio.h>

/**
 * _abs - entry point
 *
 * @c: parameter with type int
 *
 * Return: Always 0 (Success)
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	return (c * -1);
}
