#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to be counting  number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, m, s;

	flag = 0;
	s = 0;

	for (m = 0; o[m] != '\0'; m++)
{
		if (o[m] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			s++;
		}
	}

	return (s);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: (Success) pointer to an array of strings 
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int p, w = 0, len = 0, words, q = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (p = 0; p <= len; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (q)
			{
				end = p;
				tmp = (char *) malloc(sizeof(char) * (q + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[w] = tmp - q;
				w++;
				q = 0;
			}
		}
		else if (c++ == 0)
			start = p;
	}

	matrix[k] = NULL;

	return (matrix);
}
