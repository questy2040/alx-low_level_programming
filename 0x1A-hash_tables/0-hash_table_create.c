#include "hash_tables.h"
/**
* hash_table_create - function that creates a hash table.
* @size: the size of the array
*
* Return: a pointer to the newly created hash table, NULL otherwise.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht = NULL;
hash_node_t **array = NULL;
if (size == 0)
return (NULL);
ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
return (NULL);
array = calloc(size, sizeof(hash_node_t *));
if (array == NULL)
{
free(array);
free(ht);
return (NULL);
}
ht->size = size;
ht->array = array;
return (ht);
}
