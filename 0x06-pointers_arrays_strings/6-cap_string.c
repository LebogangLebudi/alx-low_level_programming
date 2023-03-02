#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
int _indexOf(char a)
{
	int i;
	char capArr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (capArr[i] == a)
			return (1);
	}
	return (0);
}
