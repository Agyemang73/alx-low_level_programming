#include "main.h"

int _strlen(char *s)
{
	int n = 0; 

	while (*s != '\0')
	{
		n = n + 1;
		s = s + 1;
	}

	return(n);
}
