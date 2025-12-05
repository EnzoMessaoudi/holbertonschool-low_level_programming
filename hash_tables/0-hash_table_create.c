#include "hash_tables.h"

/**
* hash_table_create - Create an hash table of 'size' datas.
* @size: Size of the array
* Return: Return the pointer of the new hash table created
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr = malloc(sizeof(hash_table_t));

	if (arr == NULL)
		return (0);

	arr->size = size;
	arr->array = calloc(size, sizeof(hash_node_t));
	if (arr->array == NULL)
	{
		free(arr);
		return (0);
	}

	return (arr);
}
