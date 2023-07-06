#include "main.h"
/**
 *main - Entry Point
 *_print_rev_recursion - A function that prints a string in reverse
 *@s: The string to be printed.
 *Return: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
