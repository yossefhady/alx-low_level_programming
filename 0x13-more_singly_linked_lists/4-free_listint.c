#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: head of the linked list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	curr = head;

	while (curr != NULL)
	{
		curr = curr->next;
		free(curr);
	}
}
