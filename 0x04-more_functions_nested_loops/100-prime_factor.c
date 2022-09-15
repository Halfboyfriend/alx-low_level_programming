#include <stdio.h>
/**
 * main - prints out the stdoutt
 * Return: 0 always
 */
int main(void)
{
	int num, count;

	num = 612852475143;
	for (count = 2; num > 1; count++)
	{
	while (num % count == 0)
	{
	printf("%d ", count);
	num = num / count;
	}
	}
	return (0);
}
