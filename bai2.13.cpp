#include<stdio.h>
#include<math.h>
 bool isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int amountNumber(int number)
{
	int dem = 0;
	while (number > 0)
	{
		int numeral = number % 10;
		if (isPrime(numeral) && numeral != 1)
			dem = dem + 1;
		number = number / 10;
	}
	return dem;
}
int main()
{
	int number;
	printf("give me number ");
	scanf_s("%d", &number);
	int result = amountNumber(number);
	printf("the number of primes is %d", result);
}