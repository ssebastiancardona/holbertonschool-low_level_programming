#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_delete - la tabla de aguacates borrados
  * @ht: la tabla de aguacate
  *
  * Return: Ni mierda!
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *node = NULL, *tem = NULL;

	if (ht && ht->size && ht->array)
	{
		for (; j < ht->size; ++j)
		{
			node = ht->array[j];

			if (node)
			{
				if (node->next)
				{
					node = node->next;
					while (node)
					{
						tem = node;
						node = node->next;
						free(tem->key);
						free(tem->value);
						free(tem);
					}
				}

				node = ht->array[j];
				if (node->key && node->value)
				{
					free(node->key);
					free(node->value);
				}
			}

			free(node);
		}

		free(ht->array);
		free(ht);
	}
}
