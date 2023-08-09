#include "main.h"
#include <unistd.h>
/**
 * _putchar - outputs the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on succes.
 * in the error, it return's -1, and errno will be set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
