#include "main.h"

/**
 * print_octal - Print a unsigned octal
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_octal(va_list list)
{
	char *p_bf;
	int taille;

	p_bf = itoa(va_arg(list, unsigned int), 8);

	taille = print((p_bf != NULL) ? p_bf : "NULL");

	return (taille);
}
