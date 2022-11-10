#include "main.h"

/**
 * printpour - prints a "%"
 *
 * @c character to print
 *
 * Return: char
 */
void printpour(char c)
{
	return (write(1, "%", 1));
}
