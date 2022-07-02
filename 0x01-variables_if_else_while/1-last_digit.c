#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
 * main - print whether the number n is +ve or -ve
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = abs(n % 10);

	if (lastDigit > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", lastDigit, n);
	}
	else if (lastDigit == 0)
	{
		printf("the last digit of %d is %d and is zero\n", lastDigit, n);
	}
	else
	if
	(lastDigit < 6
	&& lastDigit != 0);
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n"
		, lastDigit, n);
	}
	return (0);
}
