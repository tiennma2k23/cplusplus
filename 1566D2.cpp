#include<bits/stdc++.h>
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=310;
int fen[maxn],b[maxn];
II a[maxn];
int c[maxn][maxn];
void update(int u, int m) {
    int idx = u;
    while (idx <= m) {
        fen[idx] += 1;
        idx += (idx & (-idx));
    }
}
int get(int p) {
    int idx = p, ans = 0;
    while (idx > 0) {
        ans += fen[idx];
        idx -= (idx & (-idx));
    }
    return ans;
}

bool cmp(II a,II b)
{
    if (a.fi!=b.fi) return a.fi>b.fi;
    return a.se<b.se;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
        {
            int n,m;

            cin>>n>>m;
            int ans=0;
            for (int i=1;i<=n;i++)
                for (int j=1;j<=m;j++) cin>>c[i][j];
            for (int j=n;j>=1;j--){
            for (int i=1;i<=m;i++)
            {
                a[i].fi=c[j][i];
                a[i].se=i;
            }
            sort(a+1,a+1+m,cmp);
            int _m=m;
            for (int i=1;i<=m;i++) b[a[i].se]=_m,_m--;
            for (int i=1;i<=m;i++) cout<<b[i]<<" ";
            cout<<endl;
            for (int i=1;i<=m;i++) fen[i]=0;
            for (int i=1;i<=m;i++)
            {
                ans+=get(b[i]);
                update(b[i],m);
            }
            }
            cout<<ans<<endl;
        }
}
