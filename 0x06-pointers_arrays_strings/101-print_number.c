#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: is an integer assigned
 * Return: nothing
 **/
void print_number(int n)
{
	unsigned int i;

	if(n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else if (n / 10)
	{
		print_number(i / 10);
	}
	else
	{
	_putchar((i % 10) + '0');
	}
}
