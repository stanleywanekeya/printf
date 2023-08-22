#include "main.h"

/**
 * place_number - disp[lays number to output
 * @j: integer argument
 * Return: number of characters in number
 */
int place_number(int j)
{
	int c, count;
	char k;

	if (j / 10 != 0)
		count = 1 + place_number(j / 10);
	c = j % 10;
	k = c + '0';
	write(1, &k, 1);
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
	char k;

	k = '-';
	count = 0;
	if (*format == 'd' || *format == 'i')
	{
		number = va_arg(ap, int);
		if (number < 0)
		{
			number = -number;
			write(1, &k, 1);
			count = place_number(number);
		}
		else
			place_number(number);
	}
	return (count);
}
