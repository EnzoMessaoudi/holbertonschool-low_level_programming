#include "hash_tables.h"

/**
* key_index - Gives the index of a key
* @key: The data that the user want to store
* @size: Size of the hash table
* Return: Return the index where the data is stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ind = hash_djb2(key);

	return (ind % size);
}
