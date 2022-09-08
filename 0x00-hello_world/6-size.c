#include <stdio.h>
/**
 * Description: main - prints the stdout
 * Return: 0 if successful
 */
int main(void)
{
	printf("size of char: %d byte\n" sizeof(char));
	printf("size of int: %d byte\n" sizeof(int));
	printf("size of long: %d byte\n" sizeof(long));
	printf("size of long long: %d byte\n" sizeof(long long));
	printf("size of float: %d byte\n" sizeof(float));
	return (0);
}
