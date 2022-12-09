#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print alpabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');
	return (0);
}
