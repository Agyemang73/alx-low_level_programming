#include "main.h"
/**
 * _puts_recursion - function similar to puts
 *
 * @s: paramter
 */
void _puts_Recursion(char *s);
{
	if (s[0] == '\0')
	{
		_putchar (10);
		return;
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);
}
