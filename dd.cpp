#include <iostream>
using namespace std;

int main() {
    long long i,j,tong,a[1000000],n,s;
	cin >> n;
	for ( i = 0; i < n; i++)
		cin >> a[i];
	 s = a[0]+a[1];
	for ( i = 0; i < n; i++) {
		 tong = 0;
		for( j = i; j < n-1; j+=2) {
			tong += a[j]+a[j+1];
			if(tong > s) s = tong;
		}
	}
	cout << s<<endl;
}
