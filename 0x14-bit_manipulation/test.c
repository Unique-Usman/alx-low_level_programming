#include <stdio.h>
#include <math.h>

void print_binary(unsigned long int n)
{
        while (n != 0)
        {
		int i = n & 0x1;
	//printf("%d\n", i);
                putchar(i + 48);
                n = n >> 1;
        }
        putchar('\n');
}


int main(){
	print_binary(5);
}
