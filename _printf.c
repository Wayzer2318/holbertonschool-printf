#include "main.h"
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
	va_list arg;
	int counter = 0;

	va_start(arg, format);

	if (format == 'NULL')
		return (-1);
	while (*format != '\0')
	{
		if (*format =! '%')
		{
			counter =+ _putchar(*format);
			format++;
			continue;
		}
		format++;

		switch(*format)
		{
			case 'c':
				break;
			case 's':
				break;
			case '%':
				break;
			default:
				while (format != '%')
				{
					format--;
					counter += _putchar(*format);
				}
		}
		format++;
	}
	va_end(arg);
	return (counter);
}
