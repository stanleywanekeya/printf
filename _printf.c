#include "main.h"

/**
 * _printf - prints to console
 * @format: pointer argument
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	count = 0;
	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			++count;
		}
		else
		{
			++format;
			if (*format == '%')
				count += _putchar('%');
			else if (*format == 's' || *format == 'c')
				count += get_char(format, ap);
			else if (*format == 'd' || *format == 'i')
				count += get_number(format, ap);
		}
		++format;
	}
	va_end(ap);
	return (count);
}
