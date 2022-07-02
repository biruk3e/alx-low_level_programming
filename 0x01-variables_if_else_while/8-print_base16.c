#include<stdio.h>
/**
 * main - prints hex
 *
 * Return: always 0
 */
int main(void)
{
	char hex;

	for (hex = '1'; hex <= '9'; hex++)
	{
	putchar(hex);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
	putchar(hex);
	}
	putchar('\n');
	return (0);
}
