#include "main.h"

/**
 * print_integer - Print a number in base 10
 * @list: Number to print in base 10
 *
 * Return: Length of th numbers in decimal
 **/
int print_integer(va_list list)
{
	char *p_bf;
	int size;

	p_bf = itoa(va_arg(list, int), 10);

	size = print((p_bf != NULL) ? p_bf : "NULL");

	return (size);
}
