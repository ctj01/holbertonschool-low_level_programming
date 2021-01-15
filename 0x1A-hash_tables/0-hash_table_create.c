#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *aux = NULL;

	aux = malloc(sizeof(hash_table_t));
	if (!aux)
	{
		free(aux);
		
	}
	aux->size = size;
	aux->array = malloc(size * sizeof(hash_table_t));

	if (!aux->array)
	{
		free(aux);
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		aux->array[i] = NULL;
	}
	return (aux);
}
