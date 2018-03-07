#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct _Node {
	int n;
	struct _Node *next;
} Node;

Node *addLast(Node *l, int value)
{
	Node *p = (Node *) malloc(sizeof(Node));
	p->n = value;
	if (l == NULL)
	{
		p->next = l;
		return p;
	}
	else
	{
		Node *tmp = l;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = p;
		p->next = NULL;
		return l;
	}
}

int isPrime(int n, Node *l)
{
	int k = (int) sqrt((double) n);
	for (Node *a = l; (a->n) <= k && a != NULL; a = a->next)
	{
		if (n % a->n == 0)
			return 0;
	}
	return 1;
}

void cleanup(Node *l)
{
	Node *p = l;
	while(p != NULL)
	{
		Node *q = p->next;
		free(p);
		p = q;
	}
}

int main()
{	
	Node *prime = NULL;
	prime = addLast(prime, 2);

	long long vsota = 2;
	int j = 0;
	
	for (int i = 3; i < 2000000; i++)
	{
		if(isPrime(i, prime))
		{
			j = j + 1;
			vsota += i;
			printf("id = %6d  # = %7d  sum = %12llu\n", j, i, vsota);
			prime = addLast(prime, i);
		}
	}
	
	printf("sum = %llu\n", vsota);
	
	cleanup(prime);
	return 0;
}
