#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int n = 10;

	while (a <= 'z')
	{
		_putchar(a);
		++a;
	}
	--n;
	_putchar(10);
	a = 'a';
}
