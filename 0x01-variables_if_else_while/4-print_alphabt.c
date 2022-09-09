#include <stdio.h>
/**
 * main - prints the stdout
 * Return: 0 if successful
 */
int main(void)
{
	char lowerCase;
	char fCase;

	for (lowerCase = 'a'; lowerCase <= 'd'; lowerCase++)
	for (fCase = 'f'; fCase <= 'p'; fCase++)
	{
	putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
