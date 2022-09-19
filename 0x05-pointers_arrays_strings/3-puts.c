#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line
 * @str: the string of characters to be printed
 * Return: nothing
 */

void _puts(char *str)
{
	int t = 0;

	while (*(str + t))
	{
		_putchar(*(str + t));
		t++;
	}
	_putchar('\n');
}
