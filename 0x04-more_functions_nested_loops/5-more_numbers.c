#include "main.h"
/**
 * more_numbers - function to print out numbers
 * @void: as no return value
 */
void more_numbers(void)
{
	int i, j;

	for (i = '0'; i <= '10'; i++)
	{
	for (j = '0'; j <= '14'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	}
}