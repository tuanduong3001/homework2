#include<stdio.h>
int totalNumber(int n)
{
	int s = 0;
	while (n > 0)
	{
		int tmp = n % 10;
		s = s + tmp;
		n /= 10;
	}
	return s;
}
int calculusNumber(int n)
{
	int t = 1;
	while (n > 0) {
		int tmp = n % 10;
		t = t * tmp;
		n /= 10;
	}
	return t;
}
int main()
{
	for (int i = 10; i <= 99; i++) {
		if (calculusNumber(i) == (2 * totalNumber(i)))
			printf("%d ", i);
	}
}