#include <stdio.h>

/**
 *print_to_98 - print numbers n to 98
 *@n: integer argument
 *Return: no return value specified
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i)
				break;
			}
			else
				printf("%d, ", i);
		}
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i)
			}
			else
				printf("%d, ", i);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
