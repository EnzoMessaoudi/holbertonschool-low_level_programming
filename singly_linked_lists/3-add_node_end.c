#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - Add a node at the end of **head
* @head: List given by the user
* @str: String the user want at the end of the list
* Return: Return the string
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *last = *head;
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	while (newNode->str[i] != '\0')
		i++;

	newNode->len = i;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newNode;

	return (newNode);
}
