#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[maxn],f[maxn][2],b[maxn],fen[maxn];
void update(int p, int val)
{
    for(int i = p ; i < maxn ; i += i & -i) fen[i] = max(fen[i], val);
}

int get(int p)
{
    int res = 0;
    for(int i = p ; i ; i -= i & -i) res = max(res, fen[i]);
    return res;
}
vector<int> v(maxn);
int32_t main()
{
    int n,d,ans=-1;
    cin>>n>>d;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        v[i]=a[i];
    }
    int len=0;
    for (int i=1; i<=n; i++)
    {
        int pos=lower_bound(b+1,b+1+len,a[i])-b;
        b[pos]=a[i];
        len=max(len,pos);
        f[i][0]=pos;
    }
    memset(b,0,sizeof(b));
    len=0;
    for (int i=n; i>=1; i--)
    {
        int pos=lower_bound(b+1,b+1+len,a[i],greater<int>())-b;
        b[pos]=a[i];
        len=max(len,pos);
        f[i][1]=pos;
    }
    sort(v.begin(),v.end());
    for (int i=1; i<=n; i++)
    {
        int pos=lower_bound(v.begin(),v.end(),a[i]+d)-v.begin();
        //int res=0;
        int res=get(pos-1)+f[i][1];
        ans=max(ans,res);
        pos=lower_bound(v.begin(),v.end(),a[i])-v.begin();
        update(pos,f[i][0]);
    }
    cout<<ans<<endl;
}
