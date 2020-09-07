#include <stdio.h>
void myStartupFun(void) __attribute__ ((constructor));
/**
 * myStartupFun - Prints default line before executing main
 **/
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
