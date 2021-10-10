#include<bits/stdc++.h>
//#define int long long
using namespace std;

const int maxn=5e5+1, inf=LLONG_MAX;
int a[maxn],res[maxn],lst[maxn],nxt[maxn] ;


int calc(int x, int y)
{
    if ( x > y ) return 0 ;
    if ( lst[y] < x||nxt[x] > y ) return (y-x+1)*(y-x+2) / 2 ;
    return res[lst[y]]-res[nxt[x]-1]+(nxt[x]-x)*(nxt[x]-x+1)/2+(y-lst[y])*(y-lst[y]+1)/2 ;
}

void solve()
{
    int l,r;
    scanf("%d %d",&l,&r);
    int ans;
    /*for (int i=l;i<=r;i++)
    {
        ans=min(ans,max(calc(l,i),calc(i,r)));
    }*/
    int _l=l,_r=r;
    while (_l<=_r)
    {
        int mid=(_l+_r)/2;
        int res1=max(calc(l,mid),calc(mid,r));
        int mid1=mid-1;
        int res2=max(calc(l,mid1),calc(mid1,r));
        //cerr<<mid<<" "<<res1<<" "<<res2<<endl;
        if (res1<res2)
        {
            _l=mid+1;
            ans=res1;
        }
        else
        {
            _r=mid-1;
            ans=res2;
        }

    }
    //ans=max(calc(l,pos),calc(pos,r));
    printf("%d\n",ans);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    int n,q;
    scanf("%d %d",&n,&q);

    for ( int i=1;i<=n;i++) scanf("%d",&a[i]);
    for (int i=1;i<=n;i++)
    {
        if ( a[i] < a[i-1] ) lst[i] = i - 1 ;
        else lst[i] = lst[i-1] ;
        res[i] = res[lst[i]]+ (i - lst[i])*(i - lst[i] + 1) / 2 ;
    }
    for ( int i = n ; i >= 1 ; i-- )
    {
        if ( a[i] > a[i+1] ) nxt[i] = i + 1 ;
        else nxt[i] = nxt[i+1] ;
    }
    //for (int i=1;i<=n;i++) cout<<lst[i]<<" ";
    //cout<<endl;
   // for (int i=1;i<=n;i++) cout<<nxt[i]<<" ";
    //cout<<endl;
   // for (int i=4;i<=7;i++)
   // {
   //     cout<<calc(4,i)<<" "<<calc(i,7)<<endl;
   // }
   //cout<<calc(2,3)<<endl;
    while ( q -- )
    {
        solve();
    }
}
