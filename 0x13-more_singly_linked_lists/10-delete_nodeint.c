#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at an index of a list
 * @head: A pointer to the head of the list.
 * @index: The index of the node to be deleted
 * Return: On success return 1, Otherwise, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *backup = *head;
	unsigned int node;

	if (backup == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(backup);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (backup->next == NULL)
		{
			return (-1);
		}
		backup = backup->next;
	}
	temp = backup->next;
	backup->next = temp->next;

	free(temp);
	return (1);
}
