#include "lists.h"
#include <string.h>
/**
 * add_node_end - agrega un nodo al final de la lista
 * @head: puntero a un puntero list_t que apunta a la estructura principal
 * @str: string a adicionar node
 *
 * Return: puntero al nuevo elemento de la lista, NULL en caso de error
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *tem = NULL;
	int len = 0;

	tem = *head;

	if (tem)
	{
		while (tem->next)
		{
			tem = tem->next;
		}
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	while (str[len])
		len++;
	new_node->len = len;
	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
	}
	else
		new_node->str = NULL;
	if (tem)
		tem->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
