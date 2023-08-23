#include "main.h"

/**
 * get_format - Receives the main string and all the
 * necessary parameters to print a formated string.
 * @format: A string containing all the desired characters.
 * @list: A list of all the posible functions.
 * @ap_List: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */

int get_format(const char *format, conver_t list[], va_list ap_List)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; list[j].sym != NULL; j++)
			{
				if (format[i + 1] == list[j].sym[0])
				{
					r_val = list[j].f(ap_List);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			++i;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
