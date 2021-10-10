#include<bits/stdc++.h>
#define int long long
using namespace std;

const int maxn=1e6+1;
int n,a[maxn];

vector<int> f1(maxn), f2(maxn);

void updateP(vector<int>& b, int u, int v) {
    if (u>n||u==0) return;
    int idx = u;
    while (idx <= n) {
        b[idx] += v;
        idx += (idx & (-idx));
    }
}

void update(int l, int r, int v) {
    updateP(f1, l, (n - l + 1) * v);
    updateP(f1, r + 1, -(n - r) * v);
    updateP(f2, l, v);
    updateP(f2, r + 1, -v);
}

int getSumOnBIT(vector<int>& b, int u) {
    int idx = u, ans = 0;
    while (idx > 0) {
        ans += b[idx];
        idx -= (idx & (-idx));
    }
    return ans;
}

int prefixSum(int u) {
    return getSumOnBIT(f1, u) - getSumOnBIT(f2, u) * (n - u);
}

int getSum(int l, int r) {
    return prefixSum(r) - prefixSum(l - 1);
}

int _binary(int key)
{
    int l=1,r=n,ans=n+1;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (getSum(mid,mid)>=key) ans=mid,r=mid-1;
        else l=mid+1;
    }
    return ans;
}

void solve()
{
    int t;
    //for (int i=1;i<=n;i++) cout<<getSum(i,i)<<endl;
    cin>>t;
    int pos=_binary(t);
    //cout<<pos<<endl;
    if (pos==n+1)
    {
        cout<<0<<endl;
        return;
    }
    cout<<n-pos+1<<endl;
    update(pos,n,-1);

}

int32_t main()
{
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    for (int i=1;i<=n;i++) update(i,i,a[i]);
    int m;
    cin>>m;
    while (m--) solve();
}
