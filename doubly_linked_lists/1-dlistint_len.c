#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* dlistint_len - Return the number of nodes in dlistint_t
* @h: List given by the user
* Return: Return the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int t = 0;

	while (h)
	{
		h = h->next;
		t++;
	}

	return (t);
}
