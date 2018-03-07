#include <stdio.h>
int main()
{
	int i, j, k, a2, b2, c2;
	for (i = 1; i < 999; i++)
	{
		for (j = 1; j < 999; j++)
		{
			for (k = 1; k < 999; k++)
			{
				if (i+j+k == 1000)
				{
					a2 = i*i;
					b2 = j*j;
					c2 = k*k;
					if (a2 + b2 == c2)
					{
						int produkt = i*j*k;
						printf("a = %d\nb = %d\nc = %d\na*b*c = %d\n", i, j, i, produkt);
					} 
				}
			}
		}
	}
	
	return 0;
}
