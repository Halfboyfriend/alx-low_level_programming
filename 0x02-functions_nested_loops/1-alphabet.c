#include "main.h"
/**
 * main - prints out the stdout
 * Return: 0 if successful
 */
int main(void)
{
	char low;

	for (low = 'a'; low < 'z'; low++)
	_putchar('%c\n', low);
	print_alphabet();
	return (0);
}
