#include<stdio.h>
bool isPerfect(int n)  {
	int s = 0;
	if (n < 6)
		return false;
	else {
		for (int i = 1; i <= n / 2; i++) {
			if (n % i == 0)
				s += i;	
		}
		if (s == n)
			return true;
		else
			return false;
	}
}
int countNumber(int n)
{
	int count = 0;
	for (int i = 6; i <= n; i++)
	{
		if (isPerfect(i)==1)
			count += 1;
	}
	return count;
}
int main()  {
	int n;
	printf("give me n ");
	scanf_s("%d", &n);
	if (n >= 6)
		printf("%d", countNumber(n));
	}
