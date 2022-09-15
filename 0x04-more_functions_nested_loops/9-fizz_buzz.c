#include <stdio.h>
/**
 * main - prints out the stdout
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 15 == 0)
	{
	_putchar('FizzBuzz ');
	}
	else if (i % 5 == 0)
	{
	_putchar('Buzz ');
	}
	else if (i % 3 == 0)
	{
	_putchar('Fizz ');
	}
	else
	{
	_putchar(i);
	}
	return (0);
}
