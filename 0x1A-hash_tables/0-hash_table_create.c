#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_create - crea una hash tabla
  * @size: tamaño del array
  *
  * Return: un puntero
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hastable = NULL;
	hash_node_t **array = NULL;

	hastable = malloc(sizeof(hash_table_t));
	if (hastable == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (; i < size; ++i)
		array[i] = NULL;

	hastable->size = size;
	hastable->array = array;

	return (hastable);
}
