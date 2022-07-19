#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all elements in a list
 * @h: ptr to first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
