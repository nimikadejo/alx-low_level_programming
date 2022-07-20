#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverse ndes in a list
 * @head: pointer to the head node
 * Return: address of the first reversed node
**/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *backup;

	if (*head == NULL)
		return (NULL);
	backup = *head;
	while (backup->next != NULL)
	{
		temp = backup->next;
		backup->next = temp->next;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
