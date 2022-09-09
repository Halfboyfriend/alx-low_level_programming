#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints out the stdo
 * void: return 0 arguments
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char = "Last digit of n is";
	if (n > 5)
	{
	printf("%d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
	printf("%d and is 0\n", n);
	}
	else
	{
	print("%d and is less than 6 and 0\n", n);
	}
	return (0)
}
