#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a node in a  position
 * @head:  linked list.
 * @idx: position to add.
 * @n: node value.
 *
 * Return: n'th node data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodes;
	listint_t *index = *head;
	listint_t *new, *after;

	if (head == NULL || *head == NULL)
		return (NULL);

	for (nodes = 0; index != NULL; nodes++)
		index = index->next;

	if (idx > (nodes + 1))
		return (NULL);

	index = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		after = *head;
		for (nodes = 0; nodes < (idx - 1); nodes++)
			index = index->next;
		for (nodes = 0; nodes < idx; nodes++)
			after = after->next;
		index->next = new;
		new->next = after;
		return (new);
	}
}
