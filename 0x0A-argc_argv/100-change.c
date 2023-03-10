#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum of coins to make change for an amount of money.
 * @argc: num of args passed to the func
 * @argv: argument vector of pointers tostrings
 *
 * Return: 0 if no errors else 1
 */

int main(int argc, int *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
