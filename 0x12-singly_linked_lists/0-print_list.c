#include "lists.h"

/**
 * print_list - prints linked lists from head to tail.
 * @h: head of linked list.
 *
 * Return: number of linked list or members of list (nodes)
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (!h)
		return (n);

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
