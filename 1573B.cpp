#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+5,inf=1e9+1;
int fen[maxn];
void update(int u, int v,int n) {
    int idx = u;
    while (idx <= n) {
        fen[idx] =min(fen[idx],v);
        idx += (idx & (-idx));
    }
}

int get(int p)
{
    int idx = p, ans = inf;
    while (idx > 0) {
        ans =min(ans,fen[idx]);
        idx -= (idx & (-idx));
    }
    return ans;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        for (int i=0;i<=2*n;i++) fen[i]=inf;
        for (int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            update(a,i,2*n);
        }
        int ans=inf;
        for (int i=1;i<=n;i++)
        {
            int b;
            cin>>b;
            ans=min(ans,i-1+get(b-1)-1);
        }
        cout<<ans<<endl;
    }
}
