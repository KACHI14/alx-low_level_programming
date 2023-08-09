#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of  size, and put char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size, and assign char c
 * Return: pointer to array,  if fail NUL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int u;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (u = 0; u < size; u++)
		str[u] = c;
	return (str);
}