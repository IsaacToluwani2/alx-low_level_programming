#include <stdio.h>

void __attribute__((constructor)) hare(void);



/**
 * hare - Print the string before a
 *        main function is then executed.
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
