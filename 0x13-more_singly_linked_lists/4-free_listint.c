#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees
 * a listint_t list.
 * @head: singly linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (1)
	{
		temp = head->next;
		free(head);
		if (temp == NULL)
			break;
		head = temp;
	}
}
