#include "lists.h"

/**
 * print_listint - write a function that prints
 * all the elements of a listint_t list
 * @h: singly linked list
 * Return: size_t number of all elements.
 */
size_t print_listint(const listint_t *h)
{
size_t con = 0;
while (h)
{
printf("%d\n", h->n);
con++;
h = h->next;
}
return (con);
}
