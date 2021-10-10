#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e4;
ll a[N+1],mP[N+1];
map<ll,ll> d;
vector<ll> v;
void sang()
{

    for (ll i=2; i*i<=N; i++)
        if (!mP[i])
        {
            for (ll j=i*i; j<=N; j+=i) if (!mP[j]) mP[j]=i;
        }
    for (ll i=2; i<=N; i++)
    {
        if (!mP[i]) mP[i]=i;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    sang();
    ll q;
    cin>>q;
    while (q--)
    {
        ll n;
        ll ans=LLONG_MAX,mina=LLONG_MAX;
        cin>>n;
        for (ll i=1; i<=n; i++)
        {
            cin>>a[i];
            if (a[i]>1) mina=min(mina,a[i]);
            ll k=a[i];
            while (k>1)
            {
                if (d[mP[k]]==0) v.push_back(mP[k]);
                d[mP[k]]++;
                k/=mP[k];
            }
        }
        //cout<<mina<<endl;
        for (auto k:v)
        {
            //ll tmp=LLONG_MAX;
            ll tmp2=0;
            //if (k<=mina)
            //{
            ll tmp=0;
            for (ll i=1; i<=n; i++)
            {
                ll l=a[i]/k+(a[i]%k!=0);
                l=max(l,tmp2);
                tmp2=l;
                tmp+=l*k-a[i];
            }
            //}
            ans=min(ans,tmp);
            d[k]=0;
        }
        cout<<ans<<'\n';
    }
}
