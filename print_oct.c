#include "main.h"

/**
 * print_octal - Prints the numeric representation of a number in octal base
 * @list: List of all the arguments passed to the program
 * Return: Number of symbols printed to stdout
 */

int print_octal(va_list list)
{
	unsigned int num;
	int len;
	char *octal;
	char *reverse;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	octal = malloc(sizeof(char) * len + 1);
	if (octal == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal[len] = (num % 8) + 48;
		num = num / 8;

	}
	octal[len] = '\0';
	reverse = rev_string(octal);
	if (reverse == NULL)
		return (-1);

	write_base(reverse);
	free(octal);
	free(reverse);
	return (len);
}
