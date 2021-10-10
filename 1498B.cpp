#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+5;
ll a[maxn],ck[maxn];
int main()
{
    ll q;
    cin>>q;
    while (q--){
    ll n,w,ans=0;
    cin>>n>>w;
    for (ll i=1;i<=n;i++)
    {
        cin>>a[i];ck[i]=false;
    }
    sort(a+1,a+1+n);
    for (ll i=n;i>=1;i--) if (!ck[i])
    {
        ll t=w;
        ck[i]=true;
        ans++;
        ll pos=upper_bound(a+1,a+1+n,t-a[i])-a;
        pos--;
        t-=a[i];
        while (t>0)
        {
            pos=lower_bound(a+1,a+1+pos,t)-a;
            if (a[pos]>t) pos--;
            //while (a[pos]>t||ck[pos]) pos--;
            if (pos==0) break;
            else
            {
                ck[pos]=true;
                t-=a[pos];
            }
            //cerr<<t<<endl;
        }
    }
    cout<<ans<<endl;
    }
}
