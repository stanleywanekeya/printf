#include <unistd.h>

/**
 * _putchar - function to print char
 * @c: integer argument
 * Return: number of bytes printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
