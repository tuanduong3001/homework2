#include<stdio.h>
#include<math.h>
int isPerfect(int n)
{
	int s = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0) //Kiểm tra số nguyên tố
			s += i;
	}
	if (s == n)
		return 0;
	else
		return 1;

}
int main()
{
	int n, i;
	printf("give me n ");
	scanf_s("%d", &n);
	if (isPerfect(n))
		printf("it is perfect number");
	else
		printf("it is not perfect number");

}