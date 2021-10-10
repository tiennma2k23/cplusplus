#include <bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
	long long i;
	if(n<2) return 0;
	for (i=2 ; i<=sqrt(n) ; i++)
	    if(n%i==0)
	    return 0;
	return 1;
}

bool ck(long long n)
{
    long long m=sqrt(n);
    if (m*m==n&&prime(m)) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("THREE.INP","r",stdin);
    freopen("THREE.OUT","w",stdout);
    long long n,i;
    int t;
    cin >> t;
    for(i=1;i<=t;i++) {
      cin >> n;
      if (ck(n)) cout << 1 << endl;
      else cout << 0 << endl;
    }
}
