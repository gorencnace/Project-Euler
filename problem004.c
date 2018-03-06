#include <stdio.h>
int main()
{
	int naj = 100000;
	int a, b;
	int palindrome;
	for (naj; naj < 998001; naj++)
	{
		int zaki = naj;
		
		int q = zaki / 100000;
		zaki -= q * 100000;
		int w = zaki / 10000;
		zaki -= w * 10000;
		int e = zaki / 1000;
		zaki -= e * 1000;
		int r = zaki / 100;
		zaki -= r * 100;
		int t = zaki / 10;
		zaki -= t * 10;
		int y = zaki;
		
		if (q == y && w == t && e == r) {
			for (a = 100; a < 1000; a++) {
				if (naj % a == 0) {
					b = naj / a;
					if (b < 1000 && b > 99) {
						palindrome = naj;
					}
				}
			}
		
		}
	}
	
	printf("palindrom = %d\n", palindrome);
		
	return 0;	
}
