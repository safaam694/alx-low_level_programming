#include <stdio.h>
#include <math.h>

int main(void)
{
	long num = 612852475143;
	long factor;

	Divide out all the even factors
	while (num % 2 == 0)
	{
	num /= 2;
	factor = 2;
	}
	Divide out odd factors up to the square root of num
	for (long i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
			factor = i;
		}
	}
	If num is still greater than 2, it's the largest prime factor
	if (num > 2)
	{
		factor = num;
	}
	printf("%ld\n", factor);
	return (0);
}
