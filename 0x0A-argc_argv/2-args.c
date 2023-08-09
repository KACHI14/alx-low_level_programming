#include <stdio.h>
#include "main.h"

/**
 * main - outputs every arguments it receives
 * @argc: number of arguments
 * @argv: arguments of array
 *
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}
