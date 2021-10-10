#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[maxn],ST[4*maxn+1],n,t[maxn][20];
unordered_map<int,int> ans;

void rmq()
{
    for (int i=1;i<=n;i++) t[i][0]=a[i];
    for (int j=1;(1<<j)<=n;j++)
    {
        for (int i=1;i+(1<<j)-1<=n;i++)
        {
            t[i][j]=__gcd(t[i][j-1],t[i+(1<<(j-1))][j-1]);
        }
    }
}

int get(int x,int y)
{
    int k=log2(y-x+1);
    return __gcd(t[x][k],t[y-(1<<k)+1][k]);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
     for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        //update(1,1,n,i,a[i]);
    }
    rmq();
    //for (int i=1;i<=n;i++) cout<<get(1,1,n,i,i)<<endl;
    for (int i=1;i<=n;i++)
    {
        int j=i;
        while (j<=n)
        {
            int l=j,r=n,res=j;
            int ucln=get(i,j);
            while (l<=r)
            {
                int mid=(l+r)/2;
                if (get(i,mid)==ucln)
                {
                    l=mid+1;
                    res=mid;
                }
                else r=mid-1;
            }
            ans[ucln]+=(r-j+1);
            j=r+1;
        }
    }
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        cout<<ans[x]<<"\n";
    }
}
