#include <stdio.h>
#include <unistd.h>

/**
 * main - write to the standard error
 * some text
 * some text
 * Return - return 1
*/
int main(void)
{
        write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
        return (1);
}
