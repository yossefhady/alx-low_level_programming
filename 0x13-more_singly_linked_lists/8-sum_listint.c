#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list.
 *
 * @head: the linked list head
 *
 *Return: return the sum of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum = 0;

	if (head == NULL)
		return (0);
	curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
