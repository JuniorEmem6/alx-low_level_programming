#include <stdio.h>
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	for (char letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
}

/**
 * main - print_alphabet
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	putchar('\n');

	return (0);
}