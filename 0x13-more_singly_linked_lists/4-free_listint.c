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
	listint_t *curr, *next;

	curr = head;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
