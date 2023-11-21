#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: points the first element in linked list
 * Return: always 0
 * 
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
	    return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
