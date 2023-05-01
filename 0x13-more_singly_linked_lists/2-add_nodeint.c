#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @n: The intger to add to the node
  * Return: If the function fails - NULL.
  *         Otherwise - the address of the new element.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
