#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert node at indicated index
 * @head: pointer to the first node
 * @idx: position of node
 * @n: value of node
 * Return: the newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp = *head;
	unsigned int index;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}

	for (index = 0; index < (idx - 1); index++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
