#include "main.h"
/**
 * times_table - prints the multiplication
 * Return: 9 times table
 */
void times_table(void)
{
	int a, b, cal;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	cal = a * b;
	if (b <= 9)
	{
	if (b != 0)
	{
	_putchar(' ');
	}
	_putchar(cal + '0');
	}
	else
	{
	_putchar(cal / 10 + '0');
	_putchar(cal % 10 + '0');
	}
	if (b != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	else
	{
	_putchar('\n');
	}
	}
	}
}
