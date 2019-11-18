#include<stdio.h>
#include<math.h>
bool isPrime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int countNumber(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (isPrime(i) == 1)
			count += 1;
	}
	return count;
}
int main()
{
	int n;
	printf("give me n ");
	scanf_s("%d", &n);
	if (n >= 2)
		printf("%d", countNumber(n));
}