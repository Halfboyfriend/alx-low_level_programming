#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints out the stdout
 * Return: 0 if successful
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '16'; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
