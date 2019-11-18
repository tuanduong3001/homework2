#include<stdio.h>
int main()
{
	int n, i;
	printf("give me n ");
	scanf_s("%d", &n);
	for (int i = n; i >= 1; i--) {
		if (n % i == 0 && i % 2 != 0) {
			printf("%d", i);
			break;
		}
	}
}