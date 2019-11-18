#include<iostream>
#include<math.h>


using namespace std;
float totalSqure(int n,float x)
{
	float s = 0;
	for(int i=1;i<=n;i++) {
		s = sqrt( x + s);
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	float x;
	cin >> x;
	cout << totalSqure(n, x);
}
