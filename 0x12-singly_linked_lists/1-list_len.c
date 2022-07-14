#include "lists.h"

/**
 * list_len - returns number of elements in linked list
 * @h: ptr to first node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = (*h).next;
	}
	return (nodes);
}
