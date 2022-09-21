#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;
	int ln = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[ln];
		a[ln] = tmp;
		ln--;
	}
}
