#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll inf=1e9+1;
ll k,n,m;
ll mn[301][301][20],mx[301][301][20],a[301][301];

void sparse_table()
{
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++) mn[i][j][0]=a[i][j],mx[i][j][0]=a[i][j];
    for (ll dd=1;1<<dd<=max(n,m);dd++)
        for (ll i=1;i<=n;i++)
            for (ll j=1;j<=m;j++) mn[i][j][dd]=inf,mx[i][j][dd]=-inf;
    for (ll dd=1;1<<dd<=max(n,m);dd++)
        for (ll i=1;i<=n;i++)
            for (ll j=1;j<=m;j++)
    {
        mn[i][j][dd]=min( {mn[i][j][(dd-1)] , mn[i+(1<<(dd-1))][j][(dd-1)] , mn[i][j+(1<<(dd-1))][(dd-1)], mn[i+(1<<(dd-1))][j+(1<<(dd-1))][dd-1]});
        mx[i][j][dd]=max( {mx[i][j][(dd-1)] , mx[i+(1<<(dd-1))][j][(dd-1)] , mx[i][j+(1<<(dd-1))][(dd-1)], mx[i+(1<<(dd-1))][j+(1<<(dd-1))][dd-1]});
    }
}

bool ck(ll mid,ll i,ll j)
{
    ll x=i,y=j;
    ll _min=inf,_max=-inf;
    ll ghx=mid+i,ghy=mid+j;
    if (ghx>n||ghy>m) return false;
    while (mid>0)
    {
        ll tmp=log2(mid);
        ll tmpx=x,tmpy=y;

        while (x+(1<<tmp)<=ghx)
        {
            _min=min(_min,mn[x][tmpy][tmp]);
            _max=max(_max,mx[x][tmpy][tmp]);
            x+=(1<<tmp);
        }

        while (y+(1<<tmp)<=ghy)
        {
            _min=min(_min,mn[tmpx][y][tmp]);
            _max=max(_max,mx[tmpx][y][tmp]);
            y+=(1<<tmp);
        }
        //cerr<<mid<<" "<<tmp<<endl;
        mid-=(1<<tmp);
    }
    //cerr<<_min<<endl;
    return (_max-_min<=k);

}

int main()
{
    ll q;
    cin>>q;
    while (q--){
    ll ans=0;
    cin>>n>>m>>k;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++) cin>>a[i][j];
    sparse_table();

    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
    {
        ll l=1,r=max(n,m);
        while (l<=r)
        {
            ll mid=(l+r)/2;
            if (ck(mid,i,j)) l=mid+1,ans=max(ans,mid);
            else r=mid-1;
        }
        //cerr<<i<<" "<<j<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
    }
}
