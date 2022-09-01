#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_dnodeint-insert node at the begining
 *@head: a ptr to the doubly linked list
 *@n: data
 *Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	if (head == NULL)
		return (NULL);

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	add->prev = NULL;
	*head = add;

	if (add->next != NULL)
		add->next->prev = add;
	return (add);
}
