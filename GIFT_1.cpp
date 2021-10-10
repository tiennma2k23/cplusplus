#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
map<ll,ll> d;
ll b[maxn],a[maxn],n,k,dem,t;
void sub1()
{
    ll ans=0;
    for (ll i=1; i<=n-k+1; i++)
    {
        t=0;
        for (ll j=0; j<k; j++)
        {
            d[a[i+j]]++;
            if (d[a[i+j]]==1)
            {
                dem++;
                b[dem]=a[i+j];
            }
            t+=a[i+j];
        }
        sort(b+1,b+1+dem);
        ll key,l=1;
        ll t1=t;
        ll tmp=k/2+1;
        ll tmp1=tmp;
        while (tmp>0)
        {
            if (tmp>d[b[l]]) tmp-=d[b[l]],t-=d[b[l]]*b[l];
            else
            {
                t-=tmp*b[l];
                tmp=0;
                key=b[l];
                break;
            }
            l++;
        }
        ans=max(ans,abs(t1-t-key*(tmp1))+(t-key*(k-tmp1)));
        if (k%2==0)
        {
            l=1;
            t=t1;
            tmp=k/2;
            tmp1=tmp;
            while (tmp>0)
            {
                if (tmp>d[b[l]]) tmp-=d[b[l]],t-=d[b[l]]*b[l];
                else
                {
                    t-=tmp*b[l];
                    tmp=0;
                    key=b[l];
                    break;
                }
                l++;
            }
            ans=max(ans,abs(t1-t-key*(tmp1))+(t-key*(k-tmp1)));
        }
        for (ll i=1; i<=dem; i++) d[b[i]]=0;
        dem=0;
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    for (ll i=1; i<=n; i++) cin>>a[i];
    sub1();
}
