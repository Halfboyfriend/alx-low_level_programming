#include <stdio.h>
/**
 * main - prints the stdout
 * Return: 0 if successful
 */
int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'd'; lowerCase++ && lowerCase = 'f'; lowerCase <= 'p'; lowerCase++ && lowerCase = 'r'; lowerCase <= 'z'; lowerCase++)
	{
	putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
