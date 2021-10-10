#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=3e5+1;
int psum[maxn],t[2][maxn];
int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("RATING.inp", "r", stdin);
    freopen("RATING.ans", "w", stdout);
    int sub,n,q;
    cin>>sub;
    cin>>n>>q;
        int a;
    for (int i=1;i<=n;i++)
    {
        cin>>a;
        psum[i]=psum[i-1]+a;
        t[0][i]=t[0][i-1];t[1][i]=t[1][i-1];
        t[i&1][i]=t[i&1][i-1]+a;
    }
    while (q--)
    {
        int x,l,r;
        cin>>x>>l>>r;
        if (x < 0) {
            x = psum[l]-psum[l-1]-x;
            l++;
        }
        int pos=upper_bound(psum+l, psum+r+1, x+psum[l-1])-psum-1;
        x=x-(psum[pos]-psum[l-1]);
        if (pos==r)
        {
            cout<<x<<"\n";
            continue;
        }
        int res;
        if (r%2)
        {
            res=t[1][r]-t[1][pos]-t[0][r]+t[0][pos];
        }
        else res=t[0][r]-t[0][pos]-t[1][r]+t[1][pos];
        if ((r-pos)%2) res-=x;
        else res+=x;
        cout<<abs(res)<<"\n";
    }
}
