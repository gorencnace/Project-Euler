#include <stdio.h>
int main() {
	long a = 600851475143;
	long deljitelj = 2;
	long prast = deljitelj;
	while (a > 1) {
		while (a % deljitelj == 0) {
			prast = deljitelj;
			a /= deljitelj;
		}
		deljitelj++;
	}
	printf("%ld\n", prast);
	return 0;
}
