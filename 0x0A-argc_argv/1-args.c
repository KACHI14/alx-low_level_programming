#include <stdio.h>
#include "main.h"

/**
 * main - outputs the number of arguments passed to the program
 * @argc: numbers of arguments
 * @argv: arguments, of array 
 *
 * Return: 0 Always (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
