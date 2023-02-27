#include "main.h"
/**
 * print_rev - reverse a string
 *
 * @s: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

