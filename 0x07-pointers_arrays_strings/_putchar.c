#include "main.h"
#include <unistd.h>
/**
 *main - Entry point
 *Description '_putchar'
 *Return: 1, & c
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
