#include <stdio.h>
#include <stdlib.h>

long long najdi(char *t)
{
	long n = 0;
	
	for(int i = 0; i < 987; i++)
	{
		long tmp = 1;
		for (int j = i; j < i+13; j++)
		{
			tmp *= (t[j] - '0');
		}
		if (tmp > n)
		{
			n = tmp;
		}
	}
	
	return n;
}


int main()
{
	FILE *f = fopen("zaporedje008.txt", "r");
	
	if (f == NULL)
	{
		printf("error\n");
		return 1;
	}
	
	char *t = (char *) malloc(1000 * sizeof(char));
	
	for(int i = 0; i < 1000; i++)
		fscanf(f, "%c", &t[i]);
	
	long naj = najdi(t);
	
	printf("%ld\n", naj);
	
	free(t);
	fclose(f);
	
	return 0;
}
