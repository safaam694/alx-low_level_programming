#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
 * main - Entry point
 *
 * Description: A C program that prints a string to the standard error
 *
 * Return: Always 1 (error)
*/

int main(void)
{
write(2, MESSAGE, sizeof(MESSAGE) - 1);
return (1);
}
