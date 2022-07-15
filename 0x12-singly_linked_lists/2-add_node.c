#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at beginning of struct/list
 * @head: ptr to ptr of first node
 * @str: string
 * Return: address to the new elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = 0;
	char *newstring = 0;
	unsigned int len = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == 0)
	{
		free(newnode);
		return (NULL);
	}
	while (str[len])
		len++;
	newnode->len = len;
	newstring = strdup(str);
	if (newstring == 0)
	{
		free(newnode);
		return (0);
	}
	else
	{
		newnode->str = newstring;
	}
	if (*head != 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		*head = newnode;
		newnode->next = 0;
	}
	return (newnode);
}
