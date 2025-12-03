#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_dnodeint_at_index - Return the index'th node
* @head: List given by user
* @index: Which node the user want to see
* Return: Return the node the user want
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head != NULL)
	{
		if (c == index)
			return (head);

		head = head->next;
		c++;
	}

	return (NULL);
}
