#include <stdbool.h>
#include "lists.h"
 /* This function can print lists with a loop*/
 /* i can go through the list only once*/
 /* If the function fails, exits the program with status 98*/
/**
 * print_listint_safe - prints a linked list
 * @head: points to the beginning of a linked list
 * Return: the number of nodes in a list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast_ptr, *slow_ptr;
	size_t size;

	size = 0;

	if (head == NULL)
		return (0);

	slow_ptr = head;
	fast_ptr = head->next;

	while (fast_ptr != NULL && fast_ptr < slow_ptr)
	{
		size += 1;
	printf("[%p] %i\n", (void *)slow_ptr, slow_ptr->n);
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	printf("[%p] %i\n", (void *)slow_ptr, slow_ptr->n);
	size += 1;
	if (fast_ptr)
		printf("-> [%p] %i\n", (void *)fast_ptr, fast_ptr->n);

	return (size);
}
