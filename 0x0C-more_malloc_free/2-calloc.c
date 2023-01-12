#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *jar;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	jar = malloc(size * nmemb);

	if (jar == NULL)
		return (NULL);

	filler = jar;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (jar);
}
