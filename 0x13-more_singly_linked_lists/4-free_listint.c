#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees all nodes list
 * @head: pointer to the first node
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
