#include "lists.h"
/**
 *free_dlistint- frees the memory aquired by ptr
 *@head: ptr to doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *trasversal;

	while (head)
	{
		trasversal = head->next;
		free(head);
		head = trasversal;
	}
	head = NULL;
}
