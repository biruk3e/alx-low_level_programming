#include "main.h"

/**
 * main - putsh q10
 *
 * Return: always 0
 */

int _isLower();
int main(void)
{
	_putchar(_isLower('a') + '0');
	_putchar(_isLower('9') + '0');
	_putchar(_isLower('C') + '0');
	_putchar(_isLower('A') + '0');
	_putchar('\n');
	return (0);
}
int_isLower(int c)
{
	char character = (char)c;
	if (character <= 'z' && character >= 'a')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
