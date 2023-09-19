#include "main.h"

/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int print_binary(va_list list)
{
	char *bina;
	int size;

	bina = itoa(va_arg(list, unsigned int), 2);

	size = print(bina);

	return (size);
}
