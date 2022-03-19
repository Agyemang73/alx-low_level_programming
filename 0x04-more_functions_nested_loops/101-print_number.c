#include "main.h"
/**
 * print_number - Print integer
 * @n: number
 */
void print_number(int n)
{
	unsigned int n2, number, base10 = 1;

	if (n < 0)
	{
		_putchar('-');
		n2 = -n;
	}
	else
	{
		n2 = n;
	}
	number = n2;
	/* we get your base */
	while (number > 9)
	{
		number = number / 10;
		base10 = base10 * 10;
	}
	/* breakdown into base */
	number = n2;
	while (base10 > 1)
	{
		_putchar((number / base10) + '0');
		number = number % base10;
		base10 = base10 / 10;
	}
	_putchar((n2 % 10) + '0');
}
