#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
* print_list - Print all elements of list_h
* @h: List given by the user
* Return: Return the number of nodes printed
*/

size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		t++;
	}
	return (t);
}
