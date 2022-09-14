#include <stdio.h>

/**
 * main - print alphabet x10
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10;  i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}

	return (0);
}
