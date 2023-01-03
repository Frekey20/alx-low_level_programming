#include "main.h"
#define NULL 0
#include <stdio.h>

/**
*_strchr - locate 1st occurrence of char in string and returns pointer there
*@s: string to search
*@c: target characer
*Return: pointer to that character in string
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}