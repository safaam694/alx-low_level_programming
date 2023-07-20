#include "main.h"

/**
 * _is lower - checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase character or a for anything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
