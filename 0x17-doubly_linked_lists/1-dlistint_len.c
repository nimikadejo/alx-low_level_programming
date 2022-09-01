#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - finds number of nodes in a doubly linked list
 * @h: header of doubly linked list
 *Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;
	const dlistint_t *current_node = h;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		num_nodes++;
	}

	return (num_nodes);
}
