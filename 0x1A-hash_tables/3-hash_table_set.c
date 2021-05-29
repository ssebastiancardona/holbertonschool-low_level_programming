#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
  * hash_table_set - agrega un elemento
  * @ht: La tabla hash para agregar o actualizar
  * @key: the key
  * @value: el valor asociado a la key
  *
  * Return: 1 si tuvo éxito, 0 en caso contrario
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int _idx = 0;
	hash_node_t *element = NULL, *newNode = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	_idx = key_index((unsigned char *) key, ht->size);
	element = ht->array[_idx];

	if (element && strcmp(key, element->key) == 0)
	{
		free(element->value);
		element->value = strdup(value);
		return (1);
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[_idx];
	ht->array[_idx] = newNode;
	return (1);
}
