#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_list - Free list_t *head
* @head: List freed by the function
*/

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);

	free(head->str);
	free(head);
}
