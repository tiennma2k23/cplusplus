#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i, n;
	float x, s, t;
	long long a,b;
	cin >> x >>n;
	s = 1+x;
	b = 1;
	i = 1;
	while(i <= n)
	{
		t = pow(x, (2 * i + 1));
		a = i * 2 + 1;
		b = b * a * (a - 1);
		s = s  + (float)t/b;
		i++;
	}
	cout.precision(6);
	cout << fixed <<s;
}
