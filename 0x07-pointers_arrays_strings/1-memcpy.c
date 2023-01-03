#include "main.h"

/**
* main - copy memory area.
* @dest: copy
* @src: original address
* @n: limit
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	char *b = src;
	char *a = dest;

	while (n != 0)
	{
		*a++ = *b++;
		n--;
	}

	return (dest);

}

