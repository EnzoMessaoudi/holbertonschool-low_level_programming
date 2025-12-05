#include "hash_tables.h"

/**
* hash_table_set - Add an element inside of a hash table
* @ht: Table we want to add the element
* @key: The key of the element we want to add
* @value: The data we want to store
* Return: Return 1 if success or 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind =  hash_djb2((unsigned char *)key) % ht->size;
	hash_node_t *new_node;

	if (key == NULL || ht == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);

	new_node->next = NULL;

	if (ht->array[ind] == NULL)
		ht->array[ind] = new_node;
	else
	{
		new_node->next = ht->array[ind];
		ht->array[ind] = new_node;
	}
	return (1);
}
