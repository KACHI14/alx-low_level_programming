#include <stdio.h>
#include "main.h"

/**
 * _putchar - outputs the character c to stdout
 * @c:Ther character to print
 *
 * Return: 1 On success.
 * On error, errno is set appropriately and -1 is returned 
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
