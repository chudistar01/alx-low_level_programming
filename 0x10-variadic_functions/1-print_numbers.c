#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: number of arguements to be supplied
 * Return: numbers, followed by newline
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(list);

}
