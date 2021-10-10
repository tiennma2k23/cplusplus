#include<bits/stdc++.h>
#define int long long
using namespace std;

const int maxn=2e5+1, maxm=1e6+1, inf=LLONG_MAX;
int a[maxm],res[maxm],lst[maxm],nxt[maxm],n,q ;

int solve1(int pos,int l,int r)
{
    int d1=0;
    int d=1;
    for(int i=l+1; i<=pos; i++)
    {
        if(a[i]>=a[i-1]) d++;
        else
        {
            d1+=d*(d+1)/2;
            d=1;
        }
    }
    d1+=d*(d+1)/2;
    int d2=0;
    d=1;
    for(int i=pos+1; i<=r; i++)
    {
        if(a[i]>=a[i-1]) d++;
        else
        {
            d2+=d*(d+1)/2;
            d=1;
        }
    }
    d2+=d*(d+1)/2;
    return max(d1,d2);
}

void sub1()
{
    for(int i=1; i<=n; i++) cin>>a[i];
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int ans=inf;
        for(int i=l; i<=r; i++) ans=min(ans,solve1(i,l,r));
        cout<<ans<<endl;
    }
}

int calc(int x, int y)
{
    if ( x > y ) return 0 ;
    if ( lst[y] < x||nxt[x] > y ) return (y-x+1)*(y-x+2) / 2 ;
    return res[lst[y]]-res[nxt[x]-1]+(nxt[x]-x)*(nxt[x]-x+1)/2+(y-lst[y])*(y-lst[y]+1)/2 ;
}

void solve()
{
    int l,r;
    cin>>l>>r ;
    int u=l,v=r ;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (calc(u,mid)<calc(mid+1,v))l=mid+1 ;
        else r=mid-1 ;
    }
    int ans=calc(u,v) ;
    for ( int i=-3; i<=3; i++ )
    {
        int m=l+i ;
        if ( m>=u&&m<=v)
        {
            ans=min(ans,max(calc(u,m),calc(m,v)));
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    cin >> n >> q;
    if (n<=300)
    {
        sub1();
        return 0;
    }
    for ( int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++)
    {
        if ( a[i] < a[i-1] ) lst[i] = i - 1 ;
        else lst[i] = lst[i-1] ;
    }
    for ( int i = n ; i >= 1 ; i-- )
    {
        if ( a[i] > a[i+1] ) nxt[i] = i + 1 ;
        else nxt[i] = nxt[i+1] ;
    }
    for ( int i = 1 ; i <= n ; i++ )
    {
        res[i] = res[lst[i]]+ (i - lst[i])*(i - lst[i] + 1) / 2 ;
    }
    while ( q -- )
    {
        solve();
    }
}
