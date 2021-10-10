#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int> a(n+5);
    for (int i=1;i<=n;i++) cin>>a[i];
    if (a[n]==0)
    {
        for (int i=1;i<=n+1;i++) cout<<i<<" ";
        cout<<endl;
        return;
    }
    for (int i=0;i<n;i++)
    {
        if (a[i]==0&&a[i+1]==1)
        {
            for (int j=1;j<=i;j++) cout<<j<<" ";
            cout<<n+1<<" ";
            for (int j=i+1;j<=n;j++) cout<<j<<" ";
            cout<<endl;
            return;
        }
    }

    cout<<-1<<endl;
}

int32_t main() {
	int q;
	cin>>q;
	while (q--) solve();
}
