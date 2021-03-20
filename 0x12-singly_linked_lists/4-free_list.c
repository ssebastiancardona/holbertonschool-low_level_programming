#include "lists.h"
/**
 * free_list - libera todos los elementos de la lista
 * @head: puntero al elemento principal de la lista
 *
 * Return: nadita
 */
void free_list(list_t *head)
{
	list_t *tem;

	tem = head;
	while (tem)
	{
		if (tem->str)
			free(tem->str);
		free(tem);
		tem = tem->next;
	}
}
