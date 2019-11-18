#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n, i;
	printf("give me n ");
	scanf_s("%d", &n);
	int result = isPrime(n);
	for (i = 2; i <= n; i++)
	{
		if (isPrime(i))
			printf("%d \n", i);
	}
}

	
			
		
	


