#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int n ;
int a[maxn],e[maxn],last[2] ;

void solve()
{
    cin>>n ;
    int x = 0 ;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i] ;
        x^=(a[i]<0) ;
        last[x]=i ;
        e[i]=e[i-1]+(abs(a[i])%2==0) ;
    }
    x=0;
    int ans=0 ;
    for (int i=0; i<n; i++)
    {
        x^=(a[i]<0) ;
        int l=i+1,r=n,p=n+5 ;
        while (l<=r)
        {
            int mid=(l+r)/2 ;
            if (e[mid]>e[i])
            {
                p=min(p,mid) ;
                r=mid-1 ;
            }
            else l=mid+1 ;
        }
        if (p>n) break ;
        if (last[x]>=p) ans=max(ans,last[x]-i) ;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    solve();
}
