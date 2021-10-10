#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MOD=1e9+7;
int a[200005];
vector<int> v;
int sqr(int x) {
    return x*x;
}

int _pow(int a, int b) {
    if (b == 0) return 1 % MOD;
    else
        if (b % 2 == 0)
            return sqr(_pow(a, b/2)) % MOD;
        else
            return a * (sqr(_pow(a, b/2)) % MOD) % MOD;
}

int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    a[n+1]=0;
    int dem=1;
    int ans=0;
    for (int i=2;i<=n+1;i++)
    {
        if (a[i]==a[i-1]) dem++;
        else
        {
            if (dem>=4)
            {
                int res=((((dem-3)*(dem-2))%MOD*(dem-1))%MOD*dem)%MOD;
                //cerr<<res<<endl;
                res*=_pow(24ll,MOD-2);
                //cerr<<res<<endl;
                res%=MOD;
                ans+=res;
                ans%=MOD;
            }
            if (dem>=2)
            {
                int res=(dem*(dem-1))/2;
                res%=MOD;
                v.push_back(res);
            }
            dem=1;
        }
    }
    int sum=0;
    for (auto val:v) sum+=val;
    for (auto val:v)
    {
        sum-=val;
        int tmp=sum%MOD;
        ans+=(val*tmp)%MOD;
        ans%=MOD;
    }
    cout<<ans<<endl;
}
