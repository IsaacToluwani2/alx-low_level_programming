#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * Desc: Header file containing the prototype for all our function
 *      as used in the 0x0E-function_pointers directory.
 */

#include <stdlib.h>

int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));

#endif
