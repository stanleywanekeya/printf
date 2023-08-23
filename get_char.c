#include "main.h"

/**
 * print_char - Prints character
 * @list: list of arguments
 * Return:  return the amount of characters .
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
