#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node to end of list
 * @head: ptr to first node
 * @str: string in first node
 * Return: the added node
 */
list_t *add_node_end(list_t **head, const char *str)
