#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* list_len - Return the lenght of a list
* @h: List given by the user
* Return: Return the number of elements
*/

size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		h = h->next;
		t++;
	}

	return (t);
}
