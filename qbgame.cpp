#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+1,inf=1e9+1;;
int a[maxn][10],gt[maxn][270],f[maxn][270];
vector<int> v;

bool ok(int mask)
{
    for (int i=0;i<7;i++)
    {
        if ((mask&(1<<i))&&(mask&(1<<(i+1)))) return false;
    }
    return true;
}

/*bool check(int mask1,int mask2)
{
    for (int i=0;i<8;i++)
    {
        if ((mask1&(1<<i))&&(mask2&(1<<i))) return false;
    }
    return true;
}*/

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,ans=-inf;
    cin>>n;
    for (int j=0;j<8;j++)
        for (int i=0;i<n;i++) cin>>a[i][j];

    for (int mask=0;mask<(1<<8);mask++)
    {
        if(ok (mask))
        {
            for (int i=0;i<n;i++)
            {
                int sum=0;
                for (int j=0;j<8;j++) if (mask&(1<<j)) sum+=a[i][j];
                gt[i][mask]=sum;
            }
            v.push_back(mask);
        }
    }
    for (auto val:v) f[0][val]=gt[0][val];
    for (int i=1;i<n;i++)
    {
        for (auto val:v) f[i][val]=gt[i][val];
        for (auto val:v) f[i][val]=max(f[i][val],f[i-1][val]);
        if (i>=2)
        {
            for (auto val:v)
                for (auto val1:v) f[i][val]=max(f[i][val],gt[i][val]+f[i-2][val1]);
        }
        if (i>=1)
        {
            for (auto val:v)
                for (auto val1:v) if ((val&val1)==0) f[i][val]=max(f[i][val],gt[i][val]+f[i-1][val1]);
        }
    }
    for (int i=0;i<n;i++)
        for (int mask=0;mask<(1<<8);mask++) ans=max(ans,f[i][mask]);
    cout<<ans<<endl;
}
