#include "main.h"
/**
 * Author: @KM8Oz
 * @s: string to print with recursion method
 **/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
