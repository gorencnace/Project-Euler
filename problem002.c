#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int sum = 2;
	int c = 0;
	while (c < 4000000)
	{
		c = a+b;
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return 0;
}
