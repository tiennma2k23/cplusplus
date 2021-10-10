#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("LOTTERY.INP ","r",stdin);
    freopen("LOTTERY.OUT ","w",stdout);
    long long n,i,k,j,j1,dem,p,a,b,ans=0;
    map<long long, long long> mp;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
       cin>>p;
       mp[p]++;
    }
    cin>>a>>b;
    for (i=a;i<=b;i++)
    {
        j=abs(i);
        dem=0;
        for (j1=1;j1*j1<=j;j1++)
        {
            if (j%j1==0)
            {
                if (j/j1!=j1) dem=dem+mp[j1]+mp[j/j1];
                else dem=dem+mp[j1];
            }
            if (dem>k) break;
        }
        if (dem==k) ans++;
    }
    cout<<ans<<endl;
}
