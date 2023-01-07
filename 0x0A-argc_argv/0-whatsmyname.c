#include <stdio.h>
#include "main.h"
/**
*main - prints its name, followed by a new line.
*@argc: number of command line arguments.
*@argv: pointer to array of arguments.
*Return: 0 - success.
*/
int main(int argc _attribute_((unused)), char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);

	return (0);
}
