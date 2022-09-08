#include <stdio.h>
/**
 * Description: main - prints the stdout
 * Return: 0 if successful
 */
int main(void)
{
	printf("size of char: %d byte\n", sizeof(char));
	printf("size of int: %d byte\n", sizeof(int));
	printf("size of long int: %d byte\n", sizeof(long int));
	printf("size of long long int: %d byte\n", sizeof(long long int));
	printf("size of float: %d byte\n", sizeof(float));
	return (0);
}
