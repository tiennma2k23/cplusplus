#include<iostream>
using namespace std;
double EX = 0.0000001;
long long MOD = 1000000007;
long long Sol(long long a) {
	long long b = a + 1, c = 2*a + 1;
 	if(a&1) b /= 2;
	else a /= 2;

	if(a%3 == 0) a /= 3;
	else
		if(b%3 == 0) b /= 3;
		else c /= 3;

	return ((a*b % MOD) *c) %MOD;
}
int main() {
    int T;
    cin >> T;
    while(T --) {
 		double x, y;
 		cin >> x >> y;
 		long long a = (x + 1 - EX) - 1, b = y;

 		cout << (Sol(b) - Sol(a) + MOD) % MOD << endl;
    }
}
