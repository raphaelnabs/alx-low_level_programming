#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @src: string
 * @c: character to search
 * Description: searches string for character, returns pointer to char.
 * Return: pointer to char
 */

char *_strchr(char *src, char c)
{
	int i;

	if (src == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] == c)
		{
			return (&src[i]);
		}
	}

	if (src[i] == c)

	{
		return (&src[i]);
	}

	return (NULL);
}
