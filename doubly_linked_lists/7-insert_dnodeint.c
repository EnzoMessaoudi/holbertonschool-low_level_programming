#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Insert a new node at the idx'th position
* @h: List gived by the user
* @idx: Where the user want to put the node
* @n: What the user want inside of the node
* Return: Return the address of the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp = *h;
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (!tmp)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = tmp->next;
	newNode->prev = tmp;

	if (tmp->next)
		tmp->next->prev = newNode;

	tmp->next = newNode;

	return (newNode);
}
