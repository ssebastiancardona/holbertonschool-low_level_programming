#ifndef _LISTA_
#define _LISTA_
#include <stdlib.h>
/**
 * struct list_s - lista
 * @str: string - (malloc)
 * @len: tamaño
 * @next: puntero al siguiente nodo
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
int _putchar(char c);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif /* _LISTA_ */
