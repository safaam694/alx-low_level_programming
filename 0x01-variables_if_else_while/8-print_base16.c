#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all the numbers of base 16 in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	for (number = 97; number < 103; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}

