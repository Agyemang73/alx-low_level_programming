#include <stdio.h>
/**
 * main - Entry point
 *
 * Retrun: Always 0 (Success)
 */
int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
