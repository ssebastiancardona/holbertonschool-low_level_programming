#include "lists.h"
/**
 * sum_listint - retorna la suma de todos los datos de n
 * @head: puntero al primer nodo de la lista
 *
 * Return: sretorna la suma de todos los datos de n
 */
int sum_listint(listint_t *head)
{
	int suma = 0;

	while (head != NULL)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
