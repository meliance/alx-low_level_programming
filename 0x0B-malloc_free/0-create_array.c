#include "main.h"

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c){
	char *z;
	unsigned in i;

	if (size == 0)
		return (NULL);
	z = malloc(size * sizeof(*z));
	if (z == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		z[i] = c;
	return (z);
}
