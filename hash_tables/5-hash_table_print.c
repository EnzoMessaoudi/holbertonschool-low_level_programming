#include "hash_tables.h"

/**
* hash_table_print - Print all the content of a hash table
* @ht: Hash table we want to print
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	int first = 1;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (first == 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
