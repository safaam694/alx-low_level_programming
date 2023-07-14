#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single digit numbers in base 10 using putchar
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}

