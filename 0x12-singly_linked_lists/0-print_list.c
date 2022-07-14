#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints list of elements in nodes
 * @h: pointer to first node
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t Nodes = 0;

	while (h)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		Nodes++;
		h = h->next;
	}
	return (Nodes);
}
