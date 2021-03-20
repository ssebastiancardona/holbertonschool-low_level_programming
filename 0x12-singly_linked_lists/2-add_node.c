#include "lists.h"
#include <string.h>
/**
 * add_node - agrega un nodo al encabezado de la lista
 * @head: puntero a un puntero list_t que apunta a la estructura principal
 * @str: string para agregar node
 *
 * Return: puntero al nuevo encabezado de la lista, NULL en caso de error
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tem_head;
	int len = 0;

	tem_head = *head;
	*head = malloc(sizeof(list_t));
	if (!*head)
		return (NULL);
	while (str[len])
		len++;
	(*head)->len = len;
	if (str)
	{
		(*head)->str = strdup(str);
		if (!(*head)->str)
		{
			free(*head);
			return (NULL);
		}
	}
	else
		(*head)->str = NULL;
	(*head)->next = tem_head;
	return (*head);
}
