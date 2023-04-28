#include "main.h"

/**
 * print_triangle - Prints a triangle of squares according parameter
 * @size: The size of the squares triangle
 * Return: empty
 */

void print_triangle(int size)

{

	int row, hashes, spaces;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (row = 0; row < size; row++)
	{
	for (hashes = size - row; hashes > 1; hashes--)
	{
	_putchar(32);
	}
	for (spaces = 0; spaces <= row; spaces++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
