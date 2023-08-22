#include "main.h"

/**
 * place_number - disp[lays number to output
 * @j: integer argument
 * Return: number of characters in number
 */
int place_number(int j)
{
	int c, count;

	if (j / 10 != 0)
		count = 1 + place_number(j / 10);
	c = j % 10;
	_putchar(c + '0');
	return (count);
}
/**
 * get_number - get numbers in printf
 * @format: argument pointer
 * @ap: variadic argument
 * Return: number of characters
 */

int get_number(const char *format, va_list ap)
{
	int number, count;

	count = 0;
	if (*format == 'd' || *format == 'i')
	{
		number = va_arg(ap, int);
		if (number < 0)
		{
			number = -number;
			_putchar('-');
			count = place_number(number);
		}
		else
			place_number(number);
	}
	return (count);
}
