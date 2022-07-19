#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to head node
 * @n: integer in node
 * Return: address of new node
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;

	if (*head != NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		*head = newnode;
		newnode->next = NULL;
	}
	return (newnode);
}
