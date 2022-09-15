#include "main.h"
/**
 * more_numbers - function to print out numbers
 * @void: as no return value
 */
void more_numbers(void)
{
	int i, j, ten, unit;

	for (i = 0; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	ten = j / 10;
	unit = j % 10;
	if (j > 9)
	_putchar(tens + '0');
	_putchar(unit + '0');
	}
	_putchar('\n');
	}
}
