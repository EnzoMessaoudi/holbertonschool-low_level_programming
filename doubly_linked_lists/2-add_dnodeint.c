#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_dnodeint - Add a node (n) at the beginning of the **head lists
* @head: List given by the user
* @n: Data inisde of the node
* Return: Return the address of the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
