#include <stdio.h>

int gcd(int a, int b);

int main()
{
	int stevilo = 20;
	int i;
	for (i = 19; i > 1; i--)
	{
		stevilo *= (i / gcd(stevilo, i));
	}
	printf("%d\n", stevilo);
	return 0;
}

int gcd(int a, int b)
{
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (b == 0)
		return a;
	else
		return gcd(b, a%b); 
}

