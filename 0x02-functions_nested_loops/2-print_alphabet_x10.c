#include <stdio.h>

/**
 * main - print alphabet x10
 *
 * Return: Always 0.
 */

int main(void)
{
	for (int i = 0; i < 10;  i++)
	{
		for (char j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}

	return (0);
}
