#include "main.h"
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
	va_list arg;
	int len;

	print_t prnt[] = {
		{"c", _putchar},
		{"s", puts},
		{"%", printpour},
		{NULL,NULL}
	};

	if (format == NULL)
		return(-1);
}
