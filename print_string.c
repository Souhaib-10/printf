#include "main.h"

/**
 * print_string - Print string
 * @list: list.
 *
 * Return: String length.
 */

int print_string(va_list list)
{
	char *p;
	int p_lenght;

	p = va_arg(list, char*);
	p_lenght = print((p != NULL) ? p : "(null)");

	return (p_lenght);
}
