    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    const ll mod=1e9+7;
    ll d,f[100001][101],a[100001];
    ll solve(ll i, bool gh, ll summ)
    {
        if (i<0)
        {
            if (summ==0) return 1;
            return 0;
        }
        if (!gh&&f[i][summ]>=0) return f[i][summ];
        bool ghm;
        ll kq=0;
        ll maxc=gh?a[i]:9;
        for (ll c=0;c<=maxc;c++)
        {
            ghm=gh&&(c==maxc);
            kq=(kq+solve(i-1,ghm,(summ+c)%d))%mod;
        }
        kq%=mod;
        if (!gh) f[i][summ]=kq;
        return kq;
    }
    ll G(string s)
    {
        ll n=s.length();
        for (ll i=0;i<n;i++) a[n-i-1]=s[i]-'0';
        return solve(n-1,true,0);
    }
    int main()
    {
        string k;
        memset(f,-1,sizeof(f));
        cin>>k>>d;
        cout<<(G(k)-1+mod)%mod<<endl;
    }
