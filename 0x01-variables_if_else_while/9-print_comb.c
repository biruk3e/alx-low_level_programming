#include<stdio.h>
/**
 * main - prints hex
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}
	if (num < 9)
	{
	putchar(',');
	putchar(' ');
	}
	return (0);
}
