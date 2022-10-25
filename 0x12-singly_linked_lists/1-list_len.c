#include "lists.h"
/**
 * list_len - returns the number of elements in a list.
 * @h: singly linked list pointer.
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}

	return (count);
}
