#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *Description: This function prints all the lowercase letters of the alphabet.
 *Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
}
/**
 * main - Entry point of the program
 *
 * Description: This function is the entry point of the program. It calls the
 *              print_alphabet function and returns 0.
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
