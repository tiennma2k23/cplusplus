#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll  inf=1e9+1;
ll v[100000];
II extended_gcd(ll a, ll b,ll c) {
    ll d = __gcd(a, b);
    ll m = a, n = b;
    ll xm = 1; // (ym = 0) m = a = a*1 + b*0
    ll xn = 0; // (yn = 1) n = a = a*0 + b*1

    while (n) {
        ll q = m / n;
        ll r = m - q*n;
        ll xr = xm - q*xn;

        m = n, xm = xn;
        n = r, xn = xr;
    }

    ll X = xm * (c/d);
   ll Y = ((d - a*xm) / b) * (c/d);
    return II(X,Y);
}

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}

/*II diophante(ll a,ll b,ll c)
{
    ll g = gcd(a, b);
    II st = extended_gcd(a, b);
    II ans=II(c / g * st.fi, c / g * st.se);
    return ans;
}*/

II _min(II a,II b)
{
    if (a.se>b.se) swap(a,b);
    else if (a.se==b.se)
    {
        if (a.fi>b.fi) swap(a,b);
    }
    return a;
}
int main()
{
    ll dem=2;
    v[1]=1;
    v[2]=1;
    while (v[dem]<=inf)
    {
        dem++;
        v[dem]=v[dem-1]+v[dem-2];
    }
    //cout<<dem<<endl;
    ll q;
    cin>>q;
    while (q--)
    {
        ll n;
        II ans=II(inf,inf);
        cin>>n;
        for (ll j=2;j<=dem;j++)
        {
            if (v[j]>n) break;
            //II res=diophante(v[j-1],v[j],n);
            ll g = __gcd(v[j],v[j-1]);
            II st = extended_gcd(v[j-1], v[j],n);
            II res=II(st.fi,st.se);
            {
                ll a=res.fi;
                ll b=res.se;
                //cout<<a<<" "<<b<<" "<<v[j-1]<<" "<<v[j]<<endl;
                if (a>0&&b>0)
                {
                    ll tmp=1ll*(abs(a)/v[j]);
                    ll tmp2=1ll*(b/v[j-1]);
                    ll t=min(tmp,tmp2);
                    a-=t*v[j],b-=t*v[j-1];
                }
                else if (a<=0)
                {
                    ll tmp=1ll*(abs(a)/v[j]+1);
                    ll tmp2=1ll*(b/v[j-1]);
                    ll t=min(tmp,tmp2);
                    a+=t*v[j],b-=t*v[j-1];
                }
                else
                {
                    ll tmp=1ll*(abs(a)/v[j]);
                    ll tmp2=1ll*(abs(b)/v[j-1]+1);
                    ll t=min(tmp,tmp2);
                    a-=t*v[j],b+=t*v[j-1];
                }
                if (a>0&&b>0&&a<b) {ans=_min(ans,II(a,b));/*cout<<a<<" "<<b<<" "<<v[j-1]<<" "<<v[j]<<endl;*/}
            }
        }
        cout<<ans.fi<<" "<<ans.se<<endl;

    }
}
