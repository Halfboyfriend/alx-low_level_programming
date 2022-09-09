#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the stdout
 * Return: 0 if successful
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	for (b = ' ,'; b <= ' ,'; b++)
	{
	putchar(a);
	putchar(b);
	}
	return (0);
}
