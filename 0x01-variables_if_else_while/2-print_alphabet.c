#include <stdio.h>
/**
 * main - prints the stdo
 * Return: 0 if successful
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	putchar(alpha);
	putchar("%c");
	}
	return (0);
}
