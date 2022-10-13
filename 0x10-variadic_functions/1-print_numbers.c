#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -  function that prints numbers, followed by a new line
 * @seperator: string to be printed
 * @n: num of int passed
 * @...: unknown parameters to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (seperator != NULL && i != (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
	va_end(num);
}
