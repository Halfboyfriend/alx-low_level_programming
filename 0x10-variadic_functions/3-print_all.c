#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: unknown
 */
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - function that prints character
 * @arg: list if arg
 */
void print_char(va_list arg)
{
	char word;

	word = va_arg(word, int);
	printf("%c", word);
}
/**
 * print_int - Prints an int.
 * @arg: A list of arguments
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(num, int);
	printf("%d", num);
}
/**
 * print_float - Prints a float.
 * @arg: A list of arguments pointing to
 *       the float to be printed.
 */
void print_float(va_list arg)
{
	float dnum;

	dnum = va_arg(dnum, double);
	printf("%f", dnum);
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments
 * @Return: 0
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0; j = 0;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + 1)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
