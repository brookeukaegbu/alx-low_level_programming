#include "main.h"

/**
 * print_rev - prints a given string of characters in reverse
 * @s: string parameter to be reversed
 * Return: Returns nothing
 */

void print_rev(char *s)
{
	int b = 0;

	while (*(s + b))
	{
	b++;
	}
	b -= 1;
	while (b >= 0)
	{
		_putchar(*(s + b));
		b--;
	}
	_putchar('\n');
}
