#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=1e5+1;
int b[maxn];
int pos[maxn],a[maxn];
void solve()
{
    int n,x;
    cin>>n>>x;
    for (int i=1;i<=n;i++) cin>>a[i],b[i]=a[i];
    sort(b+1,b+1+n);
    for (int i=1;i<=n;i++)
    {
        if (a[i]!=b[i])
        {
            if (n-i<x&&i-1<x)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;

}

int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
