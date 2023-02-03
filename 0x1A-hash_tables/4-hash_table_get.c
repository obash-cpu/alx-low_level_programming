#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_get - Retrieve the value associated with
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 * Return: If the key cannot be matched - NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *elem = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);
	elem = ht->array[idx];

	if (elem == NULL)
		return (NULL);

	while (strcmp(key, elem->key) != 0)
		elem = elem->next;

	return (elem->value);
}
