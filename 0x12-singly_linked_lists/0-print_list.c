#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i = 0, j = 0;
	char _null[] = "[0] (nil)\n";
	char *str = malloc(sizeof(char) * (h->len + 12));

	while (h)
	{
		if (h->str == NULL)
		{
			while (_null[j] != '\0')
			{
				_putchar(_null[j]);
				++j;
			}
		}
		else
		{
			sprintf(str, "[%d] %s\n", h->len, h->str);
			j = 0;
			while (*(str + j) != '\0')
			{
				_putchar(*(str + j));
				++j;
			}
		}
		i++;
		h = h->next;
	}
	return (i);
}
