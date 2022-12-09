#include <stdio.h>
/**
 * main - Print single digits base 10
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');

	return (0);
}
