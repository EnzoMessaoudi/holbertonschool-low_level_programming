#include "hash_tables.h"

/**
* hash_table_delete - Delete a heash table
* @ht: Hash table we want to delete
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *tmp;
	unsigned long int c;

	if (ht == NULL)
		return;

	for (c = 0; c < ht->size; c++)
	{
		current = ht->array[c];
		while (current != NULL)
		{
			tmp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
		ht->array[c] = NULL;
	}

	free(ht->array);
	free(ht);
}
