#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	int len = 0;

	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);

	while (str[len])
		len++;

	t->len = len;
	t->str = strdup(str);
	t->next = *head;
	*head = t;
	return (t);
}