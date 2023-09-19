#include "main.h"

/**
 * print_unsigned - Print a unsigned int
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_unsigned(va_list list)
{
	char *p_bf;
	int lenght;

	p_bf = itoa(va_arg(list, unsigned int), 10);

	lenght = print((p_bf != NULL) ? p_bf : "NULL");

	return (lenght);
}
