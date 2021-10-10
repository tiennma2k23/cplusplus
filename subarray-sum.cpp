#include<bits/stdc++.h>
#define int long long
using namespace std;
map<int,int> cnt;
int32_t main()
{
    int n,x,sum=0,ans=0;
    cin>>n>>x;
    cnt[0]=1;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
        ans+=cnt[sum-x];
        cnt[sum]++;
    }
    cout<<ans<<endl;
}
