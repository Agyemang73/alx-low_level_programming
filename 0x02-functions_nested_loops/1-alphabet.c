#include "main.h"
/**
 * main - print alphabet in lowercase
 *
 * Return: 0 Always
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
