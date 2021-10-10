#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,a,b,mina=LLONG_MAX,minb=LLONG_MAX,maxa=LLONG_MIN,maxb=LLONG_MIN;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("BONUS.inp","r",stdin);
    freopen("BONUS.out","w",stdout);

    cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        cin>>a;
        mina=min(mina,a);
        maxa=max(maxa,a);
    }
    for (int i=1;i<=m;i++)
    {
        cin>>b;
        minb=min(minb,b);
        maxb=max(maxb,b);
    }
    cout<<max(max(mina*minb,maxa*maxb),max(mina*maxb,maxa*minb));
}
