#include <stdio.h>

/**
 * main - entry point
 *
 * Return : Always 0 (success)
 */

int main(void) {
	int i, j;
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

	return(0);
}
