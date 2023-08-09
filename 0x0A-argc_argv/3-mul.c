#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the converted int from the string
 */
int _atoi(char *s)
{
	int p, d, q, lens, f, digit;

	p = 0;
	d = 0;
	q = 0;
	lens = 0;
	f = 0;
	digit = 0;

	while (s[lens] != '\0')
		lens++;

	while (p < lens && f == 0)
	{
		if (s[p] == '-')
			++d;

		if (s[p] >= '0' && s[p] <= '9')
		{
			digit = s[p] - '0';
			if (d % 2)
				digit = -digit;
			q = q * 10 + digit;
			f = 1;
			if (s[p + 1] < '0' || s[p + 1] > '9')
				break;
			f = 0;
		}
		p++;
	}

	if (f == 0)
		return (0);

	return (q);
}

/**
 * main - multiplies two numbers
 * @argc: arguments of number
 * @argv: arguments of array
 *
 * Return: (Success) 0, (Error) 1
 */
int main(int argc, char *argv[])
{
	int total, nums1, nums2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	nums1 = _atoi(argv[1]);
	nums2 = _atoi(argv[2]);
	total = nums1 * nums2;

	printf("%d\n", result);

	return (0);
}
