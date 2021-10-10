#include<bits/stdc++.h>
#define int long long
using namespace std;
struct nodes
{
    int x,y;
};
nodes p[400];

int calc(int x,int y, int z)
{
    int res=abs((p[y].x-p[x].x)*(p[z].y-p[x].y)-(p[z].x-p[x].x)*(p[y].y-p[x].y));
    return res;
}

bool cmp(nodes a, nodes b)
{
    if (a.x==b.x) return a.y<b.y;
    return a.x<b.x;
}

int32_t main()
{
    int n,ans=0;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>p[i].x>>p[i].y;
    sort(p+1,p+1+n,cmp);
    for (int i=1;i<=n-3;i++)
        for (int j=i+1;j<=n-2;j++)
            for (int z=j+1;z<=n-1;z++)
                for (int k=z+1;k<=n;k++)
    {
        int res=calc(i,j,k)+calc(i,z,k);
        ans=max(ans,res);
    }
    //cout<<calc(1,2,3)<<" "<<calc(2,3,5)<<endl;
    cout<<ans<<endl;
}
