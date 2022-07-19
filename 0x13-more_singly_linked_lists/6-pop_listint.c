#include "lists.h"

/**
 * pop_listint - free a listint_t list
 * @head: pointer to the first node
 * Return: value of the head nod
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nvalue;

	if (*head == NULL)
		return (0);
	{
		temp = (*head)->next;
		nvalue = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (nvalue);
}
