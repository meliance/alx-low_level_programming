#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a
 * \ list_t list.
 * @head: a pointer to a pointer.
 * @str: a string.
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = strlen(str);
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
