#include "main.h"
#include <stdio.h>

/**
 * puts - function that print a string
 *
 * @s: String to print
 *
 * Return: void
 */

int _puts(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += _putchar(*s);
		s++;
	}
		return (count);
}
