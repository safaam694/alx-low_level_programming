#include "main.h"

/**
 * print_digonal - Draws a diagonal lines according paramater
 * @n: The number of times to print diagonal lines
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (x = 0; y < n; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
