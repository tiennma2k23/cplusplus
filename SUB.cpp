
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=-1e9-1,maxn=2e5+1;
int t[maxn];
int32_t main()
{
    int q;
    cin>>q;
    while (q--){
    int n,maxx,ans1=0,ans2=inf;
    cin>>n;
    t[0]=inf,maxx=inf;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if (a>0) ans1+=a;
        maxx=max(maxx,a);
        t[i]=max(t[i-1]+a,a);
        ans2=max(ans2,t[i]);
    }
    if (ans1>0) cout<<ans1<<" "<<ans2;
    else cout<<maxx<<" "<<ans2;
    cout<<endl;
    }
}
