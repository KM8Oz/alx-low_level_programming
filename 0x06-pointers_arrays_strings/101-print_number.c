#include "main.h"

/**
 * print_number - A function that prints an integer.
 * @n: an integer parameter.
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int m, d = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	else
		n = n;

	for (m = n; m > 9; m = m / 10)
	{
		d = d * 10;
	}
	for (; d >= 1; d = d / 10)
	{
		_putchar('0' + (n / d) % 10);
	}
}		
