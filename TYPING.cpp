#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1000000007;
int32_t main()
{
    int ans=1,tmp=1;
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++)
    {
        if (i==0||s[i]!=s[i-1]) ans=(ans*tmp)%mod,tmp=1;
        else tmp++;
    }
    ans=(ans*tmp)%mod;
    cout<<ans<<endl;
}
