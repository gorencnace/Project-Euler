#include <stdio.h>

int main()
{
	int a, sumA, sumB, sum;
	
	sumA = 0;
	
	for (a = 1; a <= 100; a++)
		sumA += a*a;
	
	sumB = (100*100*101*101)/4;
	sum = sumB - sumA;
	
	printf("%d\n", sum);
	
	return 0;
}
