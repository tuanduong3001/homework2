#include<stdio.h>
int greatestCommon(int a, int b)
{
	int tmp;
	while (b != 0) // Thuật toán eculid
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int main()
{
	int a, b;
	printf("give me a ");
	scanf_s("%d", &a);
	printf("give me b ");
	scanf_s("%d", &b);
	int result = greatestCommon(a, b);
	printf("the greatest common divisor is %d", result);

}