#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e6+1;
ll minPr[N];
ll d[N],b[N],ck[N],dem[N];
void sieve()
{
    for (ll i=2;i*i<=N;i++)
    {
        if (!minPr[i])
        {
            for (ll j=i*i;j<=N;j+=i) if (!minPr[j]) minPr[j]=i;
        }
    }
    for (ll i=1;i<=N;i++) if (!minPr[i]) minPr[i]=i;
}
int main()
{
    sieve();
    ll maxx=-1,maxxx=-1;;ll dem1=0;
    for (ll i=1;i<=N;i++)
    {
        ll tmp=i;

        while (tmp>1)
        {
            ll k=minPr[tmp];
            d[k]++;
            if (d[k]==1) dem1++,b[dem1]=k;
            if (!ck[k]) dem[k]++,ck[k]=1;
            tmp/=k;

            maxxx=max(maxxx,dem[k]);
        }
        maxx=max(maxx,dem1);
        //for (ll j=1;j<=dem1;j++)  d[b[j]]=0,ck[b[j]]=0;
    }
    ll ans=0;
    for (ll i=2;i<=N;i++) if (minPr[i]==i) ans+=dem[minPr[i]];
    cout<<ans<<endl;
    cout<<maxx<<endl;
    ll snt=0;
    for (ll i=2;i<=N;i++) if (minPr[i]==i) snt++;
    cout<<snt<<endl;
}
