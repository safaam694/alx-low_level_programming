#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @str: The string to be changed.
 * return: A pointer to the changed string.
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= '0' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}