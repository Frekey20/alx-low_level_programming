#include "main.h"
#define NULL 0

/**
*_strpbrk - return pointer to byte in s that matches a byte in accept
*@s: string to search
*@accept: target matches
*Return: pointer to index of string at first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int flag;

	while (*s != '\0')
	{
		flag = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
				flag = 1;
			j++;
		}
		j = 0;
		if (flag == 1)
			return (s);
		s++;
	}
	return (NULL);
}
