#include<bits/stdc++.h>
#define int long long
using namespace std;
int phi(int n) { // = n (1-1/p1) ... (1-1/pn)
    if (n == 0) return 0;
    int ans = n;
    for (int x = 2; x*x <= n; ++x) {
        if (n % x == 0) {
            ans -= ans / x;
            while (n % x == 0) n /= x;
        }
    }
    if (n > 1) ans -= ans / n;
    return ans;
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
int t[1000001];
int32_t main()
{
    int k,n,m;
    cin>>k>>n>>m;
    t[0]=1;
    for (int i=1;i<=n;i++) t[i]=t[i-1]*i,t[i]%=m;
    //cout<<t[3]<<endl;
    int tmp=(t[k]*t[n-k])%m;
    //cout<<tmp<<endl;
    int mu=phi(m)-1;
    //cout<<mu<<endl;
    int _tmp=_pow(tmp,mu,m);
    //int tich=1;
    //for (int i=1;i<=mu;i++) tich*=tmp,tich%=m;
    //cout<<tich<<_tmp<<m<<endl;
    //cout<<_tmp<<endl;
    int ans=((_tmp)*t[n])%m;
    //cout<<t[n]<<endl;
    cout<<ans<<endl;

}
