#include <stdio.h>

void __attribute__((constructor)) beforeMain(void);

/**
* beforeMain - print a string before main
*/

void beforeMain(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
