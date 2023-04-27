#include <stdio.h>

/**
* before_main - prints a message before the main function is executed.
*
* Description: This function is annotated with the
*              attribute `__attribute__((constructor))`, which specifies
*              that the function should be executed before the `main`
*              function. The function simply calls `printf` to print the
*              message "You're beat! and yet, you must allow,\nI bore my
*              house upon my back!\n" to the standard output.
*/
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
					 "I bore my house upon my back!\n");
}
