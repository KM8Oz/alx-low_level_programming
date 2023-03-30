#include "main.h"
/**
 * rot13 - A function that encodes a string into "rot13"
 * (rotating letter by 13 places)
 * @a: a pointer to a string.
 *
 * Return: a pointer to a string.
 */

char *rot13(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if ((a[i] >= 'a' && a[i] <= 'm') ||
				(a[i] >= 'A' && a[i] <= 'M'))
		{
			a[i] = a[i] + 13;
		}
		else if ((a[i] >= 'n' && a[i] <= 'z') ||
				(a[i] >= 'N' && a[i] <= 'Z'))
		{
			a[i] = a[i] - 13;
		}
	i++;
	}
	return (a);
}
