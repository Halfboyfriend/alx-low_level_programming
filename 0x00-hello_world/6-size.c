#include <stdio.h>
/**
 * Description: main - prints the stdout
 * Return: 0 if successful
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of long: %d byte(s)\n" sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
