#include "lists.h"
#include <stdio.h>

/**
 * listint_len - calculates number of elements in a list
 * @h: ptr to head node
 * Return: total number of elements
**/
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
