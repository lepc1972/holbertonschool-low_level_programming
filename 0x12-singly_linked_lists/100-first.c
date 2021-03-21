#include <stdio.h>

/**
* before - Function that runs before main
*/
void before(void) __attribute__ ((constructor));

void before(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

