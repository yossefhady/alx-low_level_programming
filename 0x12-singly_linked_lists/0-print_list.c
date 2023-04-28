#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in node.
 */

int print_list(const list_t *node)
{
	int nodes = 0;

	while (node)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", node->len, node->str);

		nodes++;
		node = node->next;
	}

	return (nodes);
}
