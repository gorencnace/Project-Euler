#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;	
	int sum = 0;
	
	for (int c = 1; c < 1000; c++)
	{
		if ( c%5 == 0 )
			sum += c;
		else if ( c%3 == 0 )
			sum += c;
	}
	
	printf("%d\n", sum);
	
	return 0;
}
