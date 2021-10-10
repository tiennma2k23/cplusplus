#include<bits/stdc++.h>
#define int long long
using namespace std;

int k,p,tmp;

int phi(int n) {
    int res = n;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            res -= res / i;
        }
    }
    if (n != 1) {
        res -= res / n;
    }
    return res;
}

int sqr(int x) {
    return x*x;
}

int _pow(int a, int b, int MOD) {
    if (b == 0) return 1 % MOD;
    else
        if (b % 2 == 0)
            return sqr(_pow(a, b/2,MOD)) % MOD;
        else
            return a * (sqr(_pow(a, b/2,MOD)) % MOD) % MOD;
}

int mu10(int x)
{
    //cout<<p<<endl;
    int res=_pow(10ll,x+1,p);
    //cout<<res<<" "<<x+1<<" "<<p<<endl;
    res=(res-1+p)%p;
    //cout<<res<<endl;
    int mu=35;
    int tmp=_pow(9ll,mu,p);
    res*=tmp;

    res%=p;//cout<<res<<endl;
    return res;
}

int calc()
{
    //if (k==1) return 1;
    int res=(k-1)%p;
    int tmp1=_pow(10ll,1ll*(k-1),p);
    res*=tmp1;
    res%=p;
    tmp1=mu10(1ll*(k-2));
    res=(res-tmp1+p)%p;
    int mu=35;
    int tmp=_pow(9ll,mu,p);
    res=(res*tmp)%p;
    //cout<<res<<endl;
    return res;
}

void solve()
{
    if (k==1)
    {
        cout<<1ll*(1%p)<<endl;
        return;
    }
    int mu=phi(p)-1;
    tmp=_pow(9ll,mu,p);//cout<<mu10(3ll)<<endl;
    //cout<<tmp<<endl;
    int ans=(9ll*calc()+k)%p;
    //cout<<mu10(k-2)<<endl;
    cout<<ans<<endl;
}

int32_t main()
{
    int lp=1;
    int ds=1;
    for (int i=1;i<=10000;i++)
    {
        lp=(lp*9)%108;
        if (lp==1) cout<<1<<endl;
    }
    cout<<lp<<" "<<_pow(10ll,40ll,108)<<endl;
    //cout<<lp<<endl;
    while (cin>>k>>p)
    {//cout<<phi(p)<<endl;
        solve();
    }
}
