
#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod=1e9+7;

int sqr(int x)
{
    return (x*x)%mod;
}

int _pow(int a,int b)
{
    if (b==0) return 1;
    else
    {
        if (b%2==0) return sqr(pow(a,b/2));
        else return (a*(sqr(pow(a,b/2))))%mod;
    }
}

int lt[100];
map<int,int> vs;
int32_t main()
{
    lt[0]=1;
    for (int i=1;i<=61;i++) lt[i]=lt[i-1]*2;
    vector<int> v;
    int n,k;
    while (cin>>n>>k)
    {
        if (n==0&&k==0) return 0;
        while (k--)
        {
            int x;
            cin>>x;
            v.push_back(lt[x]);
        }
        int cnt=n;
        for (auto val:v) if (!vs[val])
            {
                vs[val]=true;
                if (val<=n)
                {
                    cnt-=(val-1)/2;
                }
                else if (val<=2*n)
                {
                    int l=val-n;
                    int r=(val-1)/2;
                    cnt-=(abs(r-l)+1);
                }

            }
        for (auto val:v) vs[val]=false;
        v.clear();
        int ans=_pow(2ll,cnt);
        cout<<ans<<endl;
    }
}
