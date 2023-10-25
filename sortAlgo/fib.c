#include <stdio.h>

int fib(int n)
{
	if (n == 0)
	{
		return 0;
	}else if (n <= 2)
	{
		return 1;
	}else {
		return fib(n - 2 ) + fib(n - 1);
	}
}
int main(void)
{
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", fib(i));
	}
}
