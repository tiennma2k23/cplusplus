#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+5,M=1e9+7;
ll a[maxn],po[maxn];
ll modun(ll a)
{
    long long tich=a,du=1,p=M-2;
    while (p>0)
    {
        if (p%2==1) du=du*tich%M;
        tich=tich*tich%M;
        p/=2;
    }
    return du;
}
void prepare()
{
    po[0]=1;
    for (ll i=1; i<=maxn-5; i++) po[i]=(po[i-1]*i)%M;
}

ll C(ll k, ll n)
{
    ll tmp=po[n];
    ll tmp2=(po[k]*po[n-k])%M;
    ll tmp3=modun(tmp2);
    tmp=(tmp*tmp3)%M;
    return tmp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    prepare();
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,ans=0,k,m;

        cin>>n>>m>>k;
        for (ll i=1; i<=n; i++) cin>>a[i];
        sort(a+1,a+1+n);
        //for (ll i=1; i<=n; i++) cout<<a[i]<<" ";
        //cout<<endl;
        ll trc=0;
        for (ll i=1; i<=n; i++) if (a[i]!=a[i-1])
            {
                ll key=a[i]+k;
                ll pos=upper_bound(a+i+1,a+1+n,key)-a;
                //cerr<<pos<<endl;
                pos--;
                if (pos>=i&&a[pos]-a[i]<=k)
                {
                    if (pos>=i&&pos-i+1>=m) ans+=C(m,pos-i+1);
                    ans%=M;
                    if (trc>=i&&trc-i+1>=m)ans=(ans- C(m,trc-i+1)+M)%M;
                    //cerr<<m<<" "<<pos-i+1<<" "<<C(m,pos-i+1)<<" "<<i<<endl;
                    //cerr<<ans<<endl;
                }
                trc=pos;
            }
        cout<<ans<<endl;
    }
}
