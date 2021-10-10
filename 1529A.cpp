#include<bits/stdc++.h>
using namespace std;
int d[110];
void solve()
{
    int n,res=0,minn=110;
    cin>>n;
    for (int i=1;i<=101;i++) d[i]=0;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        d[a]++;
        minn=min(minn,a);
    }
    cout<<n-d[minn]<<endl;
}

int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
