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
	printf("%c\n");
	}
	return (0);
}
