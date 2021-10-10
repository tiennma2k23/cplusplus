
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=210,S=8e4;
map<int,int> f[maxn];
int x[maxn];
int32_t main()
{
    int n,a;
    cin>>n>>a;
    for (int i=1;i<=n;i++)
    {
        cin>>x[i];
        x[i]-=a;
    }
    f[1][x[1]]=1;
    f[0][0]=1;
    for (int i=2;i<=n;i++)
    {
        for (int sum=-S;sum<=S;sum++)
        {
            f[i][sum]+=f[i-1][sum]+f[i-1][sum-x[i]];
        }
    }
    cout<<f[n][0]<<endl;
}
