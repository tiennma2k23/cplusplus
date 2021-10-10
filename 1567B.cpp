#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=3e5+1;
int x[maxn];
void solve()
{
int a,b;
    cin>>a>>b;
    if (x[a-1]==b)
    {
        cout<<a<<endl;
        return;
    }
    if ((x[a-1]^b)==a)
    {
        cout<<a+2<<endl;
        return;
    }
    else
    {
        cout<<a+1<<endl;
        return;
    }
}

int32_t main()
{
    for (int i=1;i<maxn;i++) x[i]=x[i-1]^i;
    int q;
    cin>>q;
    while (q--) solve();
}
