// Code by 𝔑𝔤𝔲𝔶ễ𝔫 𝔐𝔦𝔫𝔥 𝔗𝔦ế𝔫
// From CVP with <3 :333333
#include<bits/stdc++.h>
#define ll long long
#define TASK "minsum"
using namespace std;
map<ll,ll> gr,gr1;
ll b[100001];
vector<ll> p;
ifstream fi (TASK ".inp");
ofstream fo (TASK ".out");
bool cmp(ll a,ll b)
{
    return gr1[a]<gr1[b];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll g,l,q;
    fi>>q;
    while (q--){
    fi>>g>>l;
    if (l%g!=0)
    {
        fo<<-1<<endl;
        continue;
    }
    ll k=l/g,ans=-1;
    for (ll i=sqrt(k);i>=1;i--)
    {
        if (k%i==0)
        {
            ll tmp=k/i;
            if (__gcd(i,tmp)==1)
            {
                ans=(i+tmp)*g;
                break;
            }
        }
    }
    fo<<ans<<endl;
}
}
