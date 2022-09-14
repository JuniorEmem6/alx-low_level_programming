#include <stdio.h>

/**
 * add - prints the addition of two number
 * member - num
 * member - num2
 * Return: Always 0.
 */

int add(int num, int num2)
{
	return (num + num2);
}

/**
 * main - add
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = add(12, 17);
	printf("%d\n", n);

	return (0);
}
