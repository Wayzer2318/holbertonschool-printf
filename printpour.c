#include "main.h"

/**
 * printpour - prints a "%"
 *
 * @c character to print
 *
 * Return: char
 */
void printpour(va_list arg)
{
	(void) write(1, "%", 1));
	return (1);
}
