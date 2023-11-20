listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	added = malloc(sizeof(listint_t));
	if (!added)
	return (NULL);

	added->n = n;
	added->next = *head;
	*head = added;

	return (added);
}
