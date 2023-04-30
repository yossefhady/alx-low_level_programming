#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *
 *@head: head of the linked list.
 *
 * Return: returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int n;

	n = (*head)->n;
	*head = (*head)->next;

	return (n);
}
