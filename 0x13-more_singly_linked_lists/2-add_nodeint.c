#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t = *added;

	added = malloc(sizeof(listint_t));
	if (!added)
	{
		return (NULL);
	}
	added->n = n;
	added->next = *head;
	*head = added;

	return (added);
}
