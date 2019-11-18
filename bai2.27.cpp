#include<stdio.h>
#include<math.h>

void divisorPrime(int n) {
	for (int i = 2; i <= n; i++) {
		int count = 0;
		while (n % i == 0) {
			count += 1;
			n /= i;
		}
		if (count > 1)
			printf("%d^%d*", i, count);
		else if (count > 0) printf("%d*", i);
	}
}
int main()
{
	int n;
	printf("give me n ");
	scanf_s("%d", &n);
	divisorPrime(n);
	
}
	
