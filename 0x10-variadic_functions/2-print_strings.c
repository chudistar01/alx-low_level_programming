#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of parameter
 * Return: void pointer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(list, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(list);

	printf("\n");
}

