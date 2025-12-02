#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Delete a node at the index'th position
* @head: List gived by the user
* @index: Where the user want to delete the node
* Return: Return 1 if succes or -1 if not
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp != NULL && i < index; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (-1);

	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
