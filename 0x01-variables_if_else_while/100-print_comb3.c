#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b;

for (a = 0; a < 9; a++)
{
for (b = a + 1; b < 10; b++)
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}