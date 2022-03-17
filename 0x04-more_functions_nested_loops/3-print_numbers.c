#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 t0 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar (i + '0');
		i++;
	}
	_putchar ('\n');
}
