#include <stdio.h>
/**
 * main - prints out the stdout
 * Return: 0 if successful
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
	putchar(upper);
	}
	putchar(lower);
	}
	putchar('\n');
	return (0);
}
