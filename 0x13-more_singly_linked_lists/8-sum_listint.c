#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum up all nodes
 * @head: pointer to the first node
 * Return: the total sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
