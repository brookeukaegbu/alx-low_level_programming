#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - takes an integer pointer and
 * updates the value it points to to 98
 * @n: an integer pointer that stores the address argument
 * Return: returns nothing
 *
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
