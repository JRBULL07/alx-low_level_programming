#include <stdio.h>
/**
 * main - Print single digits base 10
 * Return: Always 0
 */
int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}