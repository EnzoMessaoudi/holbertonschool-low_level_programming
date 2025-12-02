#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dlistint - Print all elements inside of a double list
* @h: List given by the user
* Return: Return number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int t = 0;

	while (h)
	{
		printf("%i\n", h->n);
		t++;
		h = h->next;
	}

	return (t);
}
