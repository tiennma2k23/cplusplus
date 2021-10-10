#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn=1e5+1,MOD=998244353;
ll ans,vt[maxn],cl[maxn],dd[maxn],n,Bool[maxn];

void solve()
{
    ll sl=0,t=0;
    for (ll i=1; i<=n; i++)
    {
        if (sl%2==0) t+=cl[vt[i]];
        else t-=cl[vt[i]];
        sl+=dd[vt[i]];
    }
    if (abs(t)%11==0) ans++,ans%=MOD;
}

void Try(ll k)
{
    for (ll i = 1; i <= n; i++)
    {
        if (!Bool[i])
        {
            vt[k] = i;
            Bool[i] = 1;
            if (k == n) solve();
            else
                Try(k + 1);
            Bool[i] = 0;
        }
    }
}

void sub1()
{
    ans=0;
    Try(1);
    cout<<ans<<endl;
}

void sub2()
{
    ans=0;
    ll t=0;
    for (ll i=1; i<=n; i++) t+=cl[i];
    if (abs(t)%11==0)
    {
        ans=1;
        for (ll i=1; i<=n; i++) ans=(ans*i)%MOD;
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("GIFT11.inp","r",stdin);
    freopen("GIFT11.out","w",stdout);
    ll q;
    cin>>q;
    while (q--)
    {
        cin>>n;
        ll demc=0,deml=0;
        for (ll i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            dd[i]=s.length();
            if (dd[i]%2==0) demc++;
            else deml++;
            cl[i]=0;
            for (ll j=0; j<s.length(); j++) (j%2==0)?cl[i]+=s[j]-48:cl[i]-=(s[j]-48);
            Bool[i]=false;
            //so[i]=s;
        }
        if (demc==n) sub2();
        else if (n<=10) sub1();
        else cout<<0<<endl;
    }
}
