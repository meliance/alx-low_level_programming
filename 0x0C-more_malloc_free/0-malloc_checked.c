#include "main.h"

/**
 * malloc_checked - array of prints a string
 * @b: number of memory
 * return: void
 */

void *malloc_checked(unsigned int b)
{
	void p;

	p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}
	return (p);
}
