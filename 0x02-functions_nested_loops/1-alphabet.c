#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, returns the character written.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: This function prints all the lowercase letters of the alphabet.
 *
 * Return: None
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}

/**
 * main - Entry point of the program
 *
 * Description: This function is the entry point of the program. It calls the
 * print_alphabet function and returns 0.
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
