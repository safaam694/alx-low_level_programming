#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, n = 50;
	unsigned long int a = 1, b = 2, c;

	for (i = 1; i <= n; i++)
	{
		printf("%lu", a);
		if (i != n)
			printf(", ");
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
