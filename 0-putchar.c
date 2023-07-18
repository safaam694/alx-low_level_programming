#include <unistd.h>

int main(void)
{
	char s[] = "_putchar\n";
	int len = sizeof(s) / sizeof(s[0]);
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
