#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * listint_len - return The number of nodes in the list.
 * @h: The listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
