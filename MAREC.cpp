#include<bits/stdc++.h>
using namespace std;
int d[10000];
int main()
{
    int n,ans=0,dem=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        d[a]++;
        if (d[a]==2) dem++;
        if (d[a]==4) ans++;
    }
    ans+=(dem)*(dem-1)/2;
    cout<<ans<<endl;
}
