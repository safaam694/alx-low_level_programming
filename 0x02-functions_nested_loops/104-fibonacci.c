#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int i;
	unsigned int a = 1, b = 2, c;

	printf("%u, %u", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %u", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
