#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to prints.
 * Return: Nothing!
 */

void print_number(int n)

{

	unsigned int i = n;

	if (n < 0)
	{
	n *= -1;
	i = n;
	_putchar('-');
	}
	i /= 10;
	if (i != 0)
	print_number(k);
	_putchar((unsigned int) i % 10 + '0');
}
