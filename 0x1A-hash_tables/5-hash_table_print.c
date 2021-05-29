#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_print - imprime una tabla hash (aguacate hash)
  * @ht: tabla de aguacate hash a imprimir
  *
  * Return: Ni mierda!
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int j = 0;
	short commas = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; j < ht->size; ++j)
	{
		node = ht->array[j];

		while (node)
		{
			if (commas == 1)
				printf(", ");

			commas = 1;
			printf("'%s': '%s'", (char *) node->key,
								(char *) node->value);

			node = node->next;
		}
	}

	printf("}\n");
}
