#include "main.h"
/**
 * main - print the alphabet 
 *
 * Return: 0 Always
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		++a;
	}

	_putchar(10);
}
