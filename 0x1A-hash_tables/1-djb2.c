#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_djb2 - Una función hash con el algoritmo djb2
  * @str: El valor al que la función
  *
  * Return: Un número que representa la cadena dada.
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hasht;
	int ce;

	hasht = 5381;
	while ((ce = *str++))
	{
		hasht = ((hasht << 5) + hasht) + ce; /* hash * 33 + c */
	}
	return (hasht);
}