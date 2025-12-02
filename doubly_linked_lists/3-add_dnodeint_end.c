#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_dnodeint_end - Add a node at the end of a list
* @head: List given by the user
* @n: Data inside of the node
* Return: Return the address of the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;

	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newNode;
	newNode->prev = last;

	return (newNode);
}
