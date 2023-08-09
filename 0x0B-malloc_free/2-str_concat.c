#include "main.h"
#include <stdlib.h>
/**
 * str_concat - add together for size when end of input is gotten
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int u, cu;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	u = cu = 0;
	while (s1[u] != '\0')
		u++;
	while (s2[cu] != '\0')
		cu++;
	conct = malloc(sizeof(char) * (u + cu + 1));

	if (conct == NULL)
		return (NULL);
	i = cu = 0;
	while (s1[u] != '\0')
	{
		conct[u] = s1[u];
		u++;
	}

	while (s2[cu] != '\0')
	{
		conct[u] = s2[cu];
		u++, cu++;
	}
	conct[i] = '\0';
	return (conct);
}
