#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in ten times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char m, i;

	for (m = '0'; m <= 9; m++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	}
}
