#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1;
int a[maxn],pr[maxn];
void solve() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n) ;
    int ans=0;
    for (int i = 1 ; i <= n ; i++) {
        ans += a[i] - a[i - 1] - (a[i] * (i - 1) - pr[i - 1]) ;
        pr[i] = pr[i - 1] + a[i] ;
    }
    cout<<ans<<endl;
}

int32_t main() {
	int q;
	cin>>q;
	while (q--) solve();
}
