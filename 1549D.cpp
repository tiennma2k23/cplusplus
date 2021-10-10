#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5;
int n;
int rmq[maxn+5][25],a[maxn+5],b[maxn+5];

int mu2(int x)
{
    int res=0;
    int k=x;
    k/=2;
    while(k>0) res++,k/=2;
    return res;
}
void create()
{
    for(int i=0; i<20; i ++)
    {
        for(int j=1; j+(1<<i)-1<=n; j ++)
        {
            if(i == 0) rmq[j][i] = b[j];
            else
            {
                rmq[j][i]=__gcd(rmq[j][i-1],rmq[j+(1<<(i-1))][i-1]);
            }
        }
    }
}

int get(int l,int r)
{
    int k=mu2(r-l+1),ans=rmq[l][k];
    while(l<=r)
    {
        int x=mu2(r-l+1);
        ans=__gcd(ans,rmq[l][x]);
        l+=(1<<x);
    }
    return ans;
}

void solve()
{
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<n; i++) b[i]=abs(a[i + 1]-a[i]);
    n--;
    create();
    int ans= 1;
    for(int i=1; i<=n; i++)
    {
        int l=1,r=i;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(get(mid,i)>1)ans=max(ans,i-mid+2),r=mid-1;
            else l=mid+1;
        }
    }
    cout<<ans<<endl;
}



int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
