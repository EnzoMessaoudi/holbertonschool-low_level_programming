#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dlistint - Free a double list
* @head: List given by the user
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	free_dlistint(head->next);

	tmp = head->next;
	free(head);
	head = tmp;
}
