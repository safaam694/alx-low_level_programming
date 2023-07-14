#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the lowercase alphabet in reverse using putchar
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

