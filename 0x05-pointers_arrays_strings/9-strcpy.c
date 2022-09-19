#include "main.h"
#include <string.h>

/**
 * *_strcpy - copy data from src to dest
 * @dest: destinattion pointer
 * @src: source pointer
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	char *value = strcpy(dest, src);

	return (value);
}
