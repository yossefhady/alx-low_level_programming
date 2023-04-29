#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - return The number of nodes in the list.
 * @h: The listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
    int nodes = 0;

    while (h)
    {
        h = h->next;
        nodes++;
    }
    return (nodes);
}