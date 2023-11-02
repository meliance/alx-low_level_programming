#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: size to be allocated
 * Return: if malloc fails, the malloc_checked function should
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (s == NULL)
		exit(98);
	return (p);
}
