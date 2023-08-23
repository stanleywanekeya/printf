#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t list[] = {
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"c", print_char},
		{"s", print_string},
		{"b", print_binary},
		{"u", print_unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_String},
		{"p", print_pointer},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL},
	};
	va_list ap_list;

	if (format == NULL)
		return (-1);
	va_start(ap_list, format);
	printed_chars = get_format(format, list, ap_list);
	va_end(ap_list);
	return (printed_chars);
}
