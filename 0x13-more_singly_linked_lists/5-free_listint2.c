#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free the list.
 *
 * @head: the head for list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	while (*head)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}
	head = NULL;
}
