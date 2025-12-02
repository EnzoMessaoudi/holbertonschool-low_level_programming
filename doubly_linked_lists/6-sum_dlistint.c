#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* sum_dlistint - Return the sum of all the integrer inside of head
* @head: List gived by the user
* Return: Return the sum of all the value
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
