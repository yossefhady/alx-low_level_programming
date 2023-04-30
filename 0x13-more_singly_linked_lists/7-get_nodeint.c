#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t linked list.
 *
 *@head: the linked list.
 *@index: the index of data.
 *
 * Return: return the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;

	curr = head;

	while (index--)
	{
		curr = curr->next;
	}

	return (curr);

}
