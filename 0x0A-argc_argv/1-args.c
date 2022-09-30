#include <stdio.h>

/**
 * main - function that prints number of arg
 * @argc: arguments counts
 * @argv: pointer string vecore
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	prinf("%d\n", argc - 1);
	return (0);
}
