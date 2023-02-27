#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i;
	int x = 0;

	if (_strlen(str) % 2 != 0)
	{
		x += 1;
	}
	for (i = (_strlen(str) + x) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
