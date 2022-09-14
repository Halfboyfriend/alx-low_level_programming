#include <stdio.h>
/**
 * main - prints the fibonacci
 * Return: 0 Always
 */
int main(void)
{
	long int i, a, b, result;

	a = 1;
	b = 2;
	for (i = 1; i <= 89; ++i)
	{
	if (a != 4000000)
	{
	printf("%ld, ", a);
	}
	else
	{
	printf("%ld\n", a);
	}
	result = a + b;
	a = b;
	b = result;
	}
	return (0);
}
