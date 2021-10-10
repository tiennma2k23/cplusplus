#include<bits/stdc++.h>
#define int long long
#define ii pair<int,int>
using namespace std;
#define fs first
#define sd second
const int N=2e5;
const int mod=1e9+7;

int n,a[N+5],first[N+5];
ii f[4*N+5],Left[N+5];
int Pow2[N+5];
void roirac()
{
    set<int> s;
    for (int i=1; i<=n; i++) s.insert(a[i]);
    vector<int> b(s.begin(),s.end());
    for (int i=1; i<=n; i++) a[i]=lower_bound(b.begin(),b.end(),a[i])-b.begin()+1;
}
void build(int id, int l, int r)
{
    if (l>r) return;
    if (l==r)
    {
        f[id]=ii(0,0);
        return;
    }
    int mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    f[id]=ii(0,0);
}
ii getmax(ii l, ii r)
{
    if (l.fs < r.fs) return r;
    if (l.fs > r.fs) return l;
    return ii(l.fs, (l.sd + r.sd)%mod);
}
void update(int id, int l, int r, int u, ii val)
{
    if (l>r || l>u || r<u) return;
    if (l==r)
    {
        f[id]=getmax(f[id],val);
        return;
    }
    int mid=(l+r)/2;
    update(id*2,l,mid,u,val);
    update(id*2+1,mid+1,r,u,val);
    f[id]=getmax(f[id*2],f[id*2+1]);
}
ii get(int id, int l, int r, int u, int v)
{
    if (l>r || l>v || r<u) return ii(0,0);
    if (u<=l && r<=v) return f[id];
    int mid=(l+r)/2;
    return getmax(get(id*2,l,mid,u,v), get(id*2+1,mid+1,r,u,v));
}
int32_t main()
{
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    roirac();

    update(1,0,n,0,ii(0,1));
    for (int i=n; i>1; i--)
    {
        ii tmp=get(1,0,n,0,a[i]-1);
        update(1,0,n,a[i],ii(tmp.fs+1, tmp.sd));
    }
    for (int j=0; j<=n; j++) Left[j]=get(1,0,n,0,j);

    for (int i=n; i>1; i--) first[a[i]]=i;
    Pow2[0]=1;
    for (int i=1; i<=n; i++) Pow2[i]=Pow2[i-1]*2%mod;

    ii res=ii(Left[n].fs, Left[n].sd*Pow2[n-1-Left[n].fs]%mod);
    res=getmax(res, ii(Left[a[1]-1].fs+1, Left[a[1]-1].sd*Pow2[n-1-Left[a[1]-1].fs]));
    build(1,1,n+1);
    update(1,1,n+1,n+1,ii(0,1));
    for (int i=n; i>1; i--)
    {
        ii tmp=get(1,1,n+1,a[i]+1,n+1);
        update(1,1,n+1,a[i],ii(tmp.fs+1, tmp.sd));
        if (i==first[a[i]])
        {
            ii now=get(1,1,n+1,a[i],a[i]);
            ii now1=Left[a[i]-1];
            ii now2=ii(0,0);
            if (a[1]<a[i]) now2 = ii(Left[a[1]-1].fs+1,Left[a[1]-1].sd);
            res=getmax(res, ii(now1.fs+now.fs, now1.sd*now.sd%mod*Pow2[n-1-now1.fs-now.fs]%mod));
            res=getmax(res, ii(now2.fs+now.fs, now2.sd*now.sd%mod*Pow2[n-1-now2.fs-now.fs+1]%mod));
        }
    }
    cout<<res.fs<<" "<<res.sd<<endl;
}
