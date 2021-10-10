#include<bits/stdc++.h>
using namespace std;
long long sum,n,a[500100],d[500100],k,i,m=1e9+7,ans;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    sum=1;
    d[a[1]]=1;
    for (i=1;i<=n;i++)
    {
        sum=(sum-d[a[i]]+m)%m;
        d[a[i]]=(d[a[i]]+sum)%m;
        sum=(sum+d[a[i]])%m;
    }
    ans=(sum-1+m)%m;
    cout<<ans<<endl;
}
