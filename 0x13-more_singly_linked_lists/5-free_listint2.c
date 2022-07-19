#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - deletes the head node
 * @head: pointer to the head node
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *backup  = NULL;
	listint_t *temp = NULL;

	if (*head == NULL)
		return;
	backup = *head;

	while (backup != NULL)
	{
		temp = backup->next;
		backup->next = NULL;
		free(backup);
		backup = temp;
	}
	*head = NULL;
}
