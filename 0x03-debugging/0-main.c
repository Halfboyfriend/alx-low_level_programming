#include "main.h"
/**
 * main - test function that prints if interger is positive or negative
 * Return: 0
 */
int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);
	if (i <= 98)
	{
	printf("%d is positive\n", i);
	}
	else
	{
	printf("%d is negative\n", i);
	}
}
