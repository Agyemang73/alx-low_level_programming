#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 t0 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		_putchar(n++);
	}
	_putchar(10);
}
