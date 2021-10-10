#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+5,oo=maxn;
II a[maxn];
int32_t main()
{
    int n,ans=oo;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[i]=II(x,i);
    }
    sort(a+1,a+1+n);
    for (int i=1;i<=n;i++)
    {
        if (a[i].fi!=a[i-1].fi&&a[i].fi!=a[i+1].fi)
        {
            cout<<a[i].se<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
