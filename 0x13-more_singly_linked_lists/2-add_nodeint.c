#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - return The number of nodes in the list.
 * @n: The listint_t list.
 * @head:
 *
 * Return: The number of nodes in the list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
  	listint_t *t;
	int len;

	t = malloc(sizeof(listint_t));
	if (t == NULL)
		return (NULL);

	t->len = len;
	t->str = strdup(str);
	t->next = *head;
	*head = t;
	return (t);
}