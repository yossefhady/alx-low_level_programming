#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @node: A linked list
  * Return: The number of elements of a list
  */
size_t list_len(const list_t *node)
{
	int  counter = 0;

	while (node)
	{
		node = node->next;
		counter++;
	}

	return (counter);
}
