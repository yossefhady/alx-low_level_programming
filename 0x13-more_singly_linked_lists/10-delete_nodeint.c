#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a list.
 *
 * @head: pointer to the head of the linked list.
 * @index: the index of node will be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *after;
	unsigned int last = 0;

	curr = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}


	for (last = 0; last < (index - 1); last++)
	{
		if (curr->next == NULL)
			return (-1);

		curr = curr->next;
	}
	after = curr->next;
	curr->next = after->next;
	free(after);
	return (1);

}
