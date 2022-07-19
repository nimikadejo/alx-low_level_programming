#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - adds a new node at end of a list
 * @head: pointer to the head node
 * @n: integer of the first node
 * Return: address to new node
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = NULL;
	listint_t *tempnode = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	tempnode = *head;

	if (*head != NULL)
	{
		while (tempnode->next != NULL)
		{
			tempnode = tempnode->next;
		}
		tempnode->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	return (newnode);
}
