#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int o, t, p = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (o = 0; o < ac; o++)
	{
		for (t = 0; av[o][t]; t++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (o = 0; o < ac; o++)
	{
	for (t = 0; av[o][n]; t++)
	{
		str[p] = av[o][t];
		p++;
	}
	if (str[p] == '\0')
	{
		str[p++] = '\n';
	}
	}
	return (str);
}
