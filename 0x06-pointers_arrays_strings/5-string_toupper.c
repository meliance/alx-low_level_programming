#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @s: string pointer
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;
		index++;
	}

	return (s);
}
