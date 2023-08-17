#define VARIADIC_FUNCTIONS_H
#ifndef VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Desc: Header file contains prototypes for all the functions
 *       used in thee 0x0F-variadic_functions directoryy.
 */

#include <stdarg.h>

/**
 * struct printer - A new struct type defines printer.
 * @symbol: A symbol represents a data type.
 * @print: A function pointer to a function that print
 *         a data type that corresponds to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
