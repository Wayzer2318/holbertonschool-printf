#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

typedef struct print
{
	char *data;
	int (*fun)(va_list arg);
} print_t;

int _printf(const char *format, ...);
void _puts(char *str);
int _putchar(char c);

#endif
