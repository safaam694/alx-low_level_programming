#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single digit numbers in base 10 using putchar
 *              without using any variable of type char
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int number
		;
	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
