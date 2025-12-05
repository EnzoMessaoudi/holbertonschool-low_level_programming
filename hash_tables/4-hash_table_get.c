#include "hash_tables.h"

/**
* hash_table_get - Show the value associated at index 'key'
* @ht: Table we search for the key and value
* @key: The key of what value we searching for
* Return: Return the value of the key or NULL if no key is found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *current;


	ind = hash_djb2((unsigned char *) key) % ht->size;
	current = ht->array[ind];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
