#include <stdio.h>
#include <stdlib.h>

int *f(int *t)
{
	int n = 2;
	while (t[10000] == 0)
	{
		int count = 0;
		int idx;
		for (int i = 0; t[i] != 0; i++)
		{
			if(n % t[i] == 0)
			{
				count = -1;
				break;
			}
			idx = i;
		}
		if (count == 0)
		{
			t[idx+1] = n;
		}
		n++;
	}
	
	return t;
}


int main()
{
	int *t = (int *) malloc(10000 * sizeof(int));
	t[0] = 2;
	t[1] = 3;
	t[2] = 5;
	t[3] = 7;
	
	t = f(t);
	
	printf("%d\n", t[10000]);
	
	free(t);
	return 0;
}
