#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: string to find length
 * Return: length of string
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p))
		p++;
	return (p);
}
