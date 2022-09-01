#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint_end - add a node at the end of a linked list
 * @head: ptr the character to print
 * @n:  data of the new node
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *trasversal;
	dlistint_t *new_node;

	trasversal = *head;
	while (trasversal && trasversal->next != NULL)
		trasversal = trasversal->next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = trasversal;

	if (trasversal)
		trasversal->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
