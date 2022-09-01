#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len - prints number of elements in a doubly linked list
 *@h: pointer to the head pf a doubly linked list
 *Return: the number of element in a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t iterator;

	for (iterator = 0; h != NULL; iterator++)
		h = h->next;

	return (iterator);
}
