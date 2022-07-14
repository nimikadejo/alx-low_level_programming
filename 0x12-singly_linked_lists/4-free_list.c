#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * free_list - frees list
 * @head: ptr t first node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *getlist;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		getlist = head->next;
		free(head->str);
		free(head);
		head = getlist;
	}
}
