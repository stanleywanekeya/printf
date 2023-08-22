#include "main.h"

/**
 * get_char - get strings and chars from varg
 * @format: pointer argument
 * @ap: variadic argument
 * Return: number of characters printed
 */
int get_char(const char *format, va_list ap)
{
	int count;
	char *str;

	count = 0;
	if (*format == 'c')
	{
		_putchar(va_arg(ap, int));
		++count;
	}
	else
	{
		str = va_arg(ap, char*);
		while (*str)
		{
			_putchar(*str);
			++str;
			++count;
		}
	}
	return (++count);
}
