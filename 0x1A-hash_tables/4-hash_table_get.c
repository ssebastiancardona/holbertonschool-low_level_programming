#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
  * hash_table_get - retorna el valor asoiado a una key
  * @ht: la tabla hash
  * @key: la key encontrada
  *
  * Return: el valor asociado con el elemento
  * o NULL si la key no es encontrada
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int _idx = 0;
	hash_node_t *element = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	_idx = key_index((unsigned char *) key, ht->size);
	element = ht->array[_idx];

	if (element == NULL)
		return (NULL);

	while (strcmp(key, element->key) != 0)
		element = element->next;

	return (element->value);
}
