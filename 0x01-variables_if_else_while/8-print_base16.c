#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: if successful
 */
int main(void)
{
	int var;
	char var1;

	for (var = 0; var < 10; var++)
		putchar((var % 10) + '0');

	for (var1 = 'a'; var1 <= 'f'; var1++)
		putchar(var1);

	putchar('\n');
	return (0);

}
