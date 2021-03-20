#include <stdio.h>

void main_constructor(void) __attribute__((constructor));
/**
 * main_constructor - función constructora que se ejecuta antes de main ()
 *
 * Return: nadita
 */
void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
