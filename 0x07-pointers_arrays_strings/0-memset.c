#include "main.h"

/**
*_memset - fills n bytes of memory with a constant value
*@n: is the number of counts
*@s: pointer to memory area
*@b: constant value
*return: memory area
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
