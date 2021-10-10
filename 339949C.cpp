#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5,maxm=1e6+1,inf=1e18;
int f[2][maxm];

struct nodes
{
    int c,f,v,type;
};

vector<nodes> a(maxn);

bool cmp (nodes x, nodes y)
{
    if (x.f!=y.f) return x.f>y.f;
    else return x.type<y.type;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin.exceptions(cin.failbit);
    int n;
    cin>>n;int sum=0;
    //a[0].c=inf,a[0].f=inf,a[0].v=inf;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i].c>>a[i].f>>a[i].v;
        //sum+=a[i].c;
        a[i].type=0;
    }
    int m;
    cin>>m;
    for (int i=n+1;i<=n+m;i++)
    {
        cin>>a[i].c>>a[i].f>>a[i].v;
        a[i].type=1;
        //sum+=a[i].c;
    }

    sort(a.begin()+1,a.end(),cmp);
    for (int i=1;i<maxm;i++) f[0][i]=-inf;
    int ans=0;
    for (int i=1;i<=n+m;i++)
    {
        sum+=a[i].c;
        //sum+=(a[i].type==0)?a[i].c:0;
        if (a[i].type==0)
        {
            for (int j=0;j<=sum;j++)
            {
                f[i%2][j]=f[(i+1)%2][j];
                if (j>=a[i].c) f[i%2][j]=max(f[i%2][j],f[(i+1)%2][j-a[i].c]-a[i].v);
            }
        }
        else
        {
            for (int j=0;j<=sum;j++)
            {
                f[i%2][j]=f[(i+1)%2][j];
                if (j+a[i].c<=sum) f[i%2][j]=max(f[i%2][j],f[(i+1)%2][j+a[i].c]+a[i].v);
            }
        }
        ;
    }
    for (int j=0;j<=sum;j++) ans=max(ans,f[(m+n)%2][j]);
    cout<<ans<<endl;
}
