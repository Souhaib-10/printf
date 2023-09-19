#include "main.h"

/**
 * print_hexadecimal_low - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_hexadecimal_low(va_list list)
{
	char *src;
	int size;

	src = itoa(va_arg(list, unsigned int), 16);

	size = print((src != NULL) ? src : "NULL");

	return (size);
}
