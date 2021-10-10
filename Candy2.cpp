
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=400;
int x[maxn],t[maxn];
II am[maxn],d[maxn];
int32_t main()
{
    int n,m,ans=0;
    cin>>n>>m;
    for (int i=1;i<=n;i++) cin>>x[i];

    sort(x+1,x+1+n);
    int pos=lower_bound(x+1,x+1+n,0ll)-x;

    int tmp=0,vt=0;
    for (int i=pos-1;i>=1;i--)
    {
        tmp+=abs(vt-x[i]);
        am[pos-i]=(II(max(m-tmp,0ll),x[i]));
        vt=x[i];
    }

    tmp=0,vt=0;
    for (int i=pos;i<=n;i++)
    {
        tmp+=abs(vt-x[i]);
        d[i-pos+1]=(II(max(m-tmp,0ll),x[i]));
        vt=x[i];
    }
    //da
    for (int i=1;i<=n-pos+1;i++) t[i]=t[i-1]+d[i].fi;
    int sum=0;
    for (int i=1;i<pos;i++)
    {
        sum+=am[i].fi;
        int k=abs(am[i].se);
        int l=1,r=(n-pos+1),res=0;
        while (l<=r)
        {
            int mid=(l+r)/2;
            if (t[mid]>=mid*k+k) res=mid,l=mid+1;
            else r=mid-1;
        }
        ans=max(ans,sum+t[res]-(res+1)*k);
        //cout<<ans<<" "<<res<<" "<<sum<<" "<<t[res]<<endl;
    }

    //ad
    for (int i=1;i<pos;i++) t[i]=t[i-1]+am[i].fi;
    sum=0;
    for (int i=1;i<=n-pos+1;i++)
    {
        sum+=d[i].fi;
        int k=d[i].se;
        int l=1,r=(pos-1),res=0;
        while (l<=r)
        {
            int mid=(l+r)/2;
            if (t[mid]>=mid*k+k) res=mid,l=mid+1;
            else r=mid-1;
        }
        ans=max(ans,sum+t[res]-(res+1)*k);
        //cout<<ans<<" "<<res<<" "<<sum<<" "<<t[res]<<endl;
    }

    cout<<ans<<endl;

}
