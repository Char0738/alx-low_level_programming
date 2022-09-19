#include "main.h"
/**
 * _puts - prints a string to stdout
 * @c: pointer to the string to print
 */
void _puts(char c)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
