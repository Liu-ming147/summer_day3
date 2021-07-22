#include<stdio.h>

int fib(int n)
{
	if (n > 2)
	{
		int f1, f2, f3, count;
		f1 = f2 = 1;
		count = 2;
		while (count < n)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
			count++;
		}
		return f3;
	}
	return 1;
}
void main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fib(n));
}