#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print an array
 * @a: Array to print
 * @n: number
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 4)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
