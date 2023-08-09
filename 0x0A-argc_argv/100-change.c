#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - outputs the minimum number of coins to
 * make change for an amount of money
 * @argc: arguments number
 * @argv: arguments of array
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int nums, z, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nums = atoi(argv[1]);
	result = 0;

	if (nums < 0)
	{
		printf("0\n");
		return (0);
	}

	for (z = 0; z < 5 && nums >= 0; z++)
	{
		while (nums >= coins[z])
		{
			result++;
			nums -= coins[z];
		}
	}

	printf("%d\n", result);
	return (0);
}
