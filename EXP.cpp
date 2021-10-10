#include<bits/stdc++.h>
#define int long long
const int inf=1e18;
using namespace std;
int32_t main()
{
    int a[4];
    char ch[6];
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,ans;
        cin>>a>>b>>c;
        ans=abs(a-b*c);
        ans=min(ans,abs(a+b*c));
        ans=min(ans,abs(a*b*c));
        ans=min(ans,abs(a*b+c));
        ans=min(ans,abs(a*b-c));
        ans=min(ans,abs(a+b+c));
        ans=min(ans,abs(a-b+c));
        ans=min(ans,abs(a+b-c));
        ans=min(ans,abs(a-b-c));
        ans=min(ans,abs(a-b*c));
        cout<<ans<<endl;
    }
}
