#include <bits/stdc++.h>

using namespace std;

const long long MAXN=2e5+10;

int a[MAXN];

int main()
{
    int n,t,i;
    cin >> t;
    while (t--) {
        memset(a,0,sizeof(a));
        cin >> n;
        for (i=1;i<=n;i++) cin >> a[i];
        i=n;
        while (i>1&&a[i]<=a[i-1]) i--;
        while (i>1&&a[i]>=a[i-1]) i--;
        cout << i-1 << endl;
    }
}
